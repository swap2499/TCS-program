#include <stdio.h>
int main(int argc,char *argv[])
{
	int n,first=1,sec=1,next,i;
	n=atoi(argv[1]);
	for (i=0;i<n;i++)
	{
		if(i<=1)
		next=1;	
		else
		{
			next=first+sec;
			first=sec;
			sec=next;
		}
	printf("%d\n",next);
	}
return 0;
}
