#include<stdio.h>
int main()
{
    int n,lw[10],i,bill=0,T;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&lw[i]);
      
    scanf("%d",&T);
    
    for(i=0;i<n;i++)
    {
        if(lw[i]<=T)
            bill+=1;
        else
            bill+=2;
    }
    printf("%d",bill);
    return 0;
}