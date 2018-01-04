//power of number
#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,b;
	int i,pow=1,ans=1;
	scanf("%f%f",&a,&b);
	if(a<0 && b<0)
	{
		printf("%d",pow);
	}
	for(i=1;i<=b;i++)
	{
		pow=pow*a;
	}
	printf("%d",pow);
	return 0;
}
