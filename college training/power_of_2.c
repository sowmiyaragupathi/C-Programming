#include<stdio.h>
int main(void)
{
	int num,i,pow=2,x=1,status=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		x=x*pow;
		if(x==num)
		{
			status=1;
			break;
		}
		if(x>num)
		break;
	}
	if(status==1)
	printf("yes");
	else
		printf("no");
	
	return 0;
}
