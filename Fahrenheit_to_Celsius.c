#include<stdio.h>
int main()
{
    float celsius,f = 42;
    scanf("%f",&f);
    celsius=(f-32)*5/9;
    printf("%.2f",celsius);
    return 0;
}