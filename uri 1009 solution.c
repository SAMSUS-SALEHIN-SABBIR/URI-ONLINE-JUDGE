#include <stdio.h>

int main(void) {
	// your code goes here
	char name;
	double salary,sold,total;
	scanf("%s %lf %lf",&name,&salary,&sold);
	total=salary+(sold*15)/100;
	printf("TOTAL = R$ %.2lf\n",total);
	return 0;
}
