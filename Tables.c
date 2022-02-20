#include<stdio.h>
int main()
{
	int a,b=1,c,d;
	scanf("%d%d",&a,&d);
	for(b;b<=d;b++)
	{
		if(b%2==0)
		{
			continue;
		}
		c=a*b;
		printf("%d x %d = %d
",a,b,c);
	}
	return 0;
}