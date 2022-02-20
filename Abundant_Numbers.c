#include<stdio.h>
#include<math.h>
int main()
{
	int a,i=1,sum=0;
	scanf("%d",&a);
	for(i;i<=a/2;i++)
	{
		if(a%i==0)
		{
			sum+=i;
		}
	}
	if(a<sum)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}