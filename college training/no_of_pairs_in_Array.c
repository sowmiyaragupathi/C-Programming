#include<stdio.h>
int main(void)
{
	int a[6],i,j,n=3;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			printf("\n%d,%d",a[i],a[j]);
		}
	}
	return 0;
}
