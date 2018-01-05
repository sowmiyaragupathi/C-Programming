#include<stdio.h>
int main(void)
{
	int i,a[10],s=0,status,n=5;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i+=s)
	{
	s=a[i];
	if(i==4)
	status=1;
	}
	if(status==1)
	{
		printf("true");
	}
	else
	printf("false");
	return 0;
}
