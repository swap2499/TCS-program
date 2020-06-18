#include<stdio.h>
int main(int argc,char *argv[])
{
	int n1,n2,cnt,i,j;
	n1=atoi(argv[1]);
	n2=atoi(argv[2]);
	for(i=n1;i<=n2;i++)
	{
		if(i==0 || i==1)
		continue;
		cnt=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				cnt=0;
				break;
			}
			
		}
		if(cnt==1)
		{
			printf("%d ",i);
		}		
	}
	return 0;
}
