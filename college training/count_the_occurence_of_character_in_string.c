#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[100];
    int i,n,temp,count,j;
    printf("Enter a string:");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        count=1;
        temp=a[i];
        if((a[i]>=65&&a[i]<=96)||(a[i]>=97&&a[i]<=125))
        {
            for(j=i+1;j<n;j++)
            {
            if(temp==a[j])
            {
                count++;
                if(count>1)
                {
                    a[j]='*';
                }
            }
            }
   
        printf("\n%c-%d",a[i],count);
   
        }
    }
}

