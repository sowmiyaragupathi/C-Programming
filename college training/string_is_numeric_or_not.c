#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[20];
	int count=0,i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]=='0')||(a[i]=='1')||(a[i]=='2')||(a[i]=='3')||(a[i]=='4')||(a[i]=='5')||(a[i]=='6')||(a[i]=='7')||(a[i]=='8')||(a[i]=='9'))
	            count++;	
	}
	if(count==0)
	{
		printf("%s-false",a);
	}
	else
	{
		printf("%s-true",a);
	}

	return 0;
}
