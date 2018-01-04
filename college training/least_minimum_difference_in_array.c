#include<stdio.h>
int main (void)
{
                int n,a[100],i,j,min,x,y;
                scanf("%d",&n);
                for(i=0;i<n;i++)
                
                                scanf("%d",&a[i]);
                if(a[i]>a[i+1])
                min=(a[i]-a[i+1]);
                else
                min=a[i+1]-a[i];
                for(i=0;i<n-1;i++)
                {
                        for(j=i+1;j<n;j++)
                                {
                                 if(a[i]>a[j])
                                    {
                                       if((a[i]-a[j])<min)
                                          {
                                           x=a[i];
                                           y=a[j];
                                           min=a[i]-a[j];
                                           }              
                                     }
                                   else
                                     {
                                           if((a[j]-a[i])<min)
                                           {
                                             x=a[i];
                                             y=a[j];
                                             min=a[j]-a[i];
                                            }
                                  }
                                
                  }
                                
                }
                printf("the minimum difference between %d and %d is %d",x,y,min);
                return 0;
}
