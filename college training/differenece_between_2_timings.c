#include<stdio.h>
int main(void)
{
	int a,b,c,d,t1,t2,ans,e,f;
	printf("\nenter the time1 with hour and minutes:");
	scanf("%d%d",&a,&b);
	printf("%d:%d",a,b);
	printf("\nenter the time2 with hour and minutes:");
	scanf("%d%d",&c,&d);
	printf("%d:%d",c,d);
	t1=a*60+b;
	t2=c*60+d;
	if(t2>t1)
	{
		ans=t2-t1;
		printf("\nthe output in  minutes:%d",ans);
	}
	else
	{
		ans=t1-t2;
		printf("\nthe output in  minutes:%d",ans);
	}
	e=ans/60;
	f=ans%60;
	printf("\nthe output in hour and minutes:%d:%d",e,f);
	return 0;
}
