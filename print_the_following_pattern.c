#include<stdio.h>
int main()
{
  int r,i,j;
  scanf("%d",&r);
  for(i=r;i>=1;i--)
  {
	   for(j=r;j>=1;j--)
	    {
	    	printf("%d ",j);
		}
    printf("
");
  }
  return 0;
}