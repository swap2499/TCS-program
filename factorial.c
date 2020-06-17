#include<stdio.h>
int main()
{
	int a,fact=1,i;
	printf("\n Enter a no.= ");
	scanf("%d",&a);
	if(a<0)
	{
		printf("\n Enter Positive no. :-");
		return 1;
	}
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("\n Factorial :- %d\n\n",fact);
	return 0;
}
