#include<stdio.h>
int main()
{
    int i,j,g;
    scanf("%d",&g);
    for(i=1;i<=g;i++)
    {
        for(j=1;j<=g;j++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
    return 0;
}