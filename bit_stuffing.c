#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter number of inputs : ");
    scanf("%d",&n);
    // enter data
    int arr[n];
    int i;
    printf("Enter the input:");
    for( i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);
    }
    // Create a new array
    int newarr[n*2];
    int j=0;
    int count=0;
    for(i=0;i<n;i++)
	{
        newarr[j]=arr[i];
        if(arr[i]==1)
		{
            count++;
        }
        else
		{
            count=0;
        }
        if(count==5)
		{
            j++;
            newarr[j]=0;
            count=0;
        }
        j++;
    }
    // printf("%d",j);
    printf("\nStuffed array : ");
    for(i=0;i<j;i++)
	{
        printf("%d",newarr[i]);
    }
return 0;
}
