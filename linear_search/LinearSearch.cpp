//Linear Search
/* Time complexity = O(n) only one for loop to search the data.
  Space Complexity = O(n) for the elements of array.*/
#include<stdio.h>
int linear_search(int a[],int n, int data)             //Function to search linearly
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i] == data)
		{
			return i;
		}
	}
	return -1;
}

int main()                                             //main() function
{
	int n, j, data;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array: \n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	for(j=0;j<n;j++)
	{
		printf("%d    ",a[j]);
	}
	printf("Enter the value you want to search: ");
	scanf("%d",&data);
	int ans = linear_search(a, n, data);
	{
	    if(ans==-1)
	        printf("Element not found in array.");
	    else
	        printf("Element is at index %d i.e. position = %d.",ans,ans+1);
	}
}

