//difference between two timings
#include<stdio.h>
int main(void)
{
	int a,b,c,d,t1,t2,ans,e,f,m;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	t1=a*60+b;
	t2=c*60+d;
	if(a<=0 && b<=0 && c<=0 && d<=0)
	{
		printf("\n%d",m);
	}
	else
	{
	if(t2>t1)
	{
		ans=t2-t1;
	}
	else
	{
		ans=t1-t2;
	}
	e=ans/60;
	f=ans%60;
	printf("\n%d %d",e,f);
	}
	return 0;
}
