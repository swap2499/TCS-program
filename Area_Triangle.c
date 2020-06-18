#include <stdio.h>
int main(int argc,char *argv[])
{
float height,base,area;
height=atoi(argv[1]);
base=atoi(argv[2]);
area=0.5*base*height;
printf("%.2f",area);
return 0;
}
