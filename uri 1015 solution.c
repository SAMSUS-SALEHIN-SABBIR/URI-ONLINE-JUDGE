#include <stdio.h>
#include<math.h>

int main(void) {
	float p1,p2,x1,x2,y1,y2,x;
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	p1=(x2-x1);
	p2=(y2-y1);
	x=sqrt((p1*p1)+(p2*p2));
	printf("%.4f\n",x);
	return 0;
}
