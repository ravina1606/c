#include<stdio.h>
int main()
{
	int a[100],n,i,x,mid;
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be search");
	scanf("%d",&x);
	int low= 1;
    int	high=n;
    mid=(low+high)/2;
	while(low<=high)
	{
		

	if(x<a[mid])
	{
		high=mid-1;
	}
	else if(x==a[mid])
	{
		
		printf("element %d is find at index %d",x,mid);
		break;
	}
	else
	{
		low=mid+1;
		
	}
	
    }

return 0;
	
}