#include<stdio.h>
int main(int argc,char *argv[])
{
	int n1,n2,i,gcd=0,lcm=0;
	n1=atoi(argv[1]);
	n2=atoi(argv[2]);
	for(i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		gcd=i;
	}
	printf("\n GCD = %d",gcd);
	lcm=(n1*n2)/gcd;
	printf("\n LCM = %d\n\n",lcm);
	return 0;
}
