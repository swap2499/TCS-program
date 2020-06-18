#include<stdio.h>
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return (fib(n-1)+fib(n-2));
}
int main(int argc,char *argv[])
{
	int n,i,cnt=0;
	n=atoi(argv[1]);
	for(i=0;i<n;i++)
	{
		printf("\n %d ",fib(cnt));
		cnt++;
	}
	return 0;
}
