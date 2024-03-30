#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of the natural number is %d",sum);
	return 0;
}