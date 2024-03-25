#include<stdio.h>
#include<time.h>
int BinarySearch(int array[],int low,int high,int x)
{
	
if(high>=low)
{
	int	mid=low+(high-low)/2;
	if(x==array[mid])
	{
		return mid;
	}
	if(x<array[mid])
	{
		return BinarySearch(array,low,mid-1,x);
		 return BinarySearch(array,mid+1,high,x);
	}
	
}
	return -1;
}
	

int main(void)
{
	int n,i,x;
	int array[100];
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);	
	}
	printf("enter the element to be search");
	scanf("%d",&x);
	
	int low=0;
	int high=n-1;
	int result=BinarySearch(array,0,n-1,x);
	printf("element %d is present at index %d",x,result);
	return 0;
}