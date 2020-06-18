#include<stdio.h>
int main()
{
	int n,i,cnt=0,fl=0;
	printf("\n Enter a no. :-");
	scanf("%d",&n);
	if(n==1)
	{
		printf("\n Prime no. starts from 2\n");
		fl=1;
	}
	else
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		cnt++;
	}
	if(fl!=1)
	{
		if(cnt==0)
		printf("\n Prime\n");
		else
		printf("\n Not prime\n");
	}
	return 0;
}
