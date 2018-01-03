#include<stdio.h>
int main(void)
{
	int a[6],i,j,n=6,num;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=i+1;i<n && j<n;i++,j++)
	{ 
		if(a[i]>a[j])
		{
			num=a[i];
			break;
		}
	}
	printf("%d",num);
	return 0;
}
