#include<stdio.h>
int main()
{
	long int n,i,sum=0,fact=1,o,r;
	printf("\n Enter a no.:- ");
	scanf("%ld",&n);
	o=n;
	while(n>0)
	{
		fact=1;
		r=n%10;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(o==sum)
	printf("\n Strong Number\n");
	else
	printf("\n Not Strong Number\n");
	return 0;	
}
// Examples :- 1,2,145,40585...
