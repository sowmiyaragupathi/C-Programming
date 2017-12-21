#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[20];
	int i,n,b,count=0,count1=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	b=(int)a[i];
	if((b>=65 && b<=90)||(b>=97&&b<=122))
	{
		count++;
	}
	else
	{
		count1++;
	}
	}
	printf("alphabets=%d   numbers=%d",count,count1);
	return 0;
}
