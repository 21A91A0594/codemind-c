#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,n,i,j,count=0;
    scanf("%lli%lli",&a,&b);
    if(a<=1)
      {
          a=2;
      }
      for(i=a;i<=b;i++)
      {
          n=0;
          for(j=2;j<=sqrt(i);j++)
          {
              if(i%j==0)
              {
                  n=1;
                  break;
              }
          }
          if(n==0)
             {
             count++;      
             }
            }
            printf("%lli",count);
            return 0;
      }