#include <stdio.h>
#include<string.h>
int main(void) 
{
 char a[20],temp,temp1;
 int i,j,n;
 scanf("%s",a);
 n=strlen(a);
 if(n%2==0)
 for(i=0;i<n;i+=2)
 {
 	temp=a[i];
 	a[i]=a[i+1];
 	a[i+1]=temp;
 	printf("%c%c",a[i],a[i+1]);
 }
 else
	for(j=0;j<n;j+=2)
	{
	 	temp1=a[j];
	 	a[j]=a[j+1];
	 	a[j+1]=temp1;
	 	printf("%c%c",a[j],a[j+1]);
	 }
 return 0;
}
