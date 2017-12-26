#include <stdio.h>

int main(void) {
	// your code goes here
	int n,m_w_h;
	float a_p_h;
	scanf("%d %d",&n,&m_w_h);
	scanf("%f",&a_p_h);
	printf("NUMBER = %d\n",n);
	printf("SALARY = U$ %.2f\n",(m_w_h*a_p_h));
	return 0;
}
