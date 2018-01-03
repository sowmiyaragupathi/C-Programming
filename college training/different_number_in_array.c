#include<stdio.h>
int main(void)
{
	int a[5],b,i,c,d;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int countE=0,countO=0;
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
		   countE++;
		}
		if(countE>1)
		{
		   	if(a[i]%2==1)
		   	{
		   	printf("%d",a[i]);
		   
		   	}
		   }
		
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==1)
		{
		   countO++;
		}
		if(countO>1)
		   {
		   	if(a[i]%2==0)
		   	{
		   	printf("%d",a[i]);
		   	
		   	}
		   }
		}
	
	return 0;
}
