#include <stdio.h>

int main(void) {
	// your code goes here
	int t_d;
	float s_f;
	scanf("%d %f",&t_d,&s_f);
	printf("%.3f km/l\n",(t_d/s_f));
	return 0;
}
