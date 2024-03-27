#include<stdio.h>
#include<math.h>
int pow(int a,int exp)
{
	if(exp==0)
	return 1;
	else
	return a*pow(a,exp-1);
}
int main()
{
	int a,exp;
	printf("enter the no ");
	scanf("%d",&a);
	printf("enter the exp ");
	scanf("%d",&exp);
	int result=pow(a,exp);
	printf("power of the given no is: %d",result);
	return 0;
	
}