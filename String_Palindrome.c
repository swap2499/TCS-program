#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,len,flag=0;	
	printf("\n Enter a String :- ");
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n String is not Palindrome\n");
	}
	else
	{
		printf("\n String is Palindrome\n");
	}
	return 0;
}
