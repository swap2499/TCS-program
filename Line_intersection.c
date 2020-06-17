#include<stdio.h>
int main()
{
	float m1,m2,y1,y2,y3,y4,x1,x2,x3,x4,x_int,y_int;
	printf("\n Enter First line :- ");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	printf("\n Enter Second line :- ");
	scanf("%f%f%f%f",&x3,&y3,&x4,&y4);
	m1=(y2-y1)/(x2-x1);
	m2=(y4-y3)/(x4-x3);
	x_int=(y1-m1*x1-y3+m2*x3)/(m2-m1);
	y_int=y1+m1*(x_int-x1);
	printf("\n x-intersection = %0.2f,\n y-intersection = %0.2f\n\ns",x_int,y_int);
	return 0;
}
