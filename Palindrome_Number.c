#include<stdio.h>
int main()
{
	long int n,sum=0,r,z;
	printf("\n Enter a no. :- ");
	scanf("%ld",&n);
	z=n;
	//Not applicable when number starts from 0. ex-0110
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(z==sum)
	printf("\n Palindrome");
	else
	printf("\n Not Palindrome");
	return 0;
}
