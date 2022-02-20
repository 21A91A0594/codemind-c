#include<stdio.h>
int main()
{
    float i,a,sum=0;
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {
        sum=sum+1/i;
    }
    printf("%.2f",sum);
    return 0;
    
}