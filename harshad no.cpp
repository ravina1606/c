#include<stdio.h>
int main()
{
	int sum=0,num,rem;
	printf("enter the no:");
	scanf("%d",&num);
	while(num!=0)
	{
    rem=num%10;
	sum=sum+rem;
	num=num/10;
	}
	printf("sum of the digit of number:%d",sum);
	
	if(num%sum==0)
	{
		printf("given no is harshat no");
	}
	else
	{
		printf("/n given no is not a harshat no");
	}
}

