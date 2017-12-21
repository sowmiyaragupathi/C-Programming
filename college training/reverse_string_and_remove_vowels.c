#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[50],temp;
	int i=0,n,j;
	scanf("%s",a);
	n=strlen(a);
	j=n-1;
	while(i<j)
	{
	temp=a[i];
	a[i]=a[j];;
	a[j]=temp;
	i++;
	j--;
	}
	printf("%s",a);
	for(i=0; i<n;i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' ||a[i]=='o' || a[i]=='u' ||a[i]=='A' ||
		a[i]=='E' || a[i]=='I' || a[i]=='O' ||a[i]=='U')
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
		n--;
		}
	}
	printf("\n%s",a);
	return 0;
}
