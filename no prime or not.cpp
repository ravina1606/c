#include<stdio.h>
int main()
{
	int num;
	printf("enter the no to be check:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("given no is even no");
	}
	else
	{
		printf("given no is odd no");
	}
	return 0;
}