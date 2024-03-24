#include<stdio.h>
int main()
{
	int n,a[100],i,t;
	int min=a[1];
	int max=a[1];
	printf("Enter the no of elements");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(min>a[i])
        {
        	min=a[i];
		}
		else
		{
			max=a[i];
		}
        	
		
	}
	    printf("minimum value is %d",min);
	    printf("maximum value is %d",max);
	t=2*n-2;
	printf("time complexity is %d",t);
	return 0;
}