#include <stdio.h>
#define PI 3.14
int main(int argc,char *argv[])
{
float dia,radius,area=0;
// Input diameter not radius
dia=atoi(argv[1]);
radius=0.5*dia;
area=PI*radius*radius;
printf("%.2f",area);
return 0;
}
