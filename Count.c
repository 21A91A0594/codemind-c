#include<stdio.h>
int main()
{
    int x[20],i,n,e_count=0,o_count=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(x[i]%2==0)
          e_count++;
        else
          o_count++;
    }
    printf("%d %d",e_count,o_count);
    return 0;
}
