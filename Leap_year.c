#include <stdio.h>
int main(int argc,char *argv[])
{
	int year;
	year=atoi(argv[1]);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
				printf("Leap year");
			else
				printf("not leap year");
		}
		else
			printf("leap year");
	}
	else
	printf("not leap year");
	
return 0;
}
