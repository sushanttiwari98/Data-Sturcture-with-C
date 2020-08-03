//Binary Search
/* Time Complexity = log(n) as the search goes on dividing array to its half
   Space Complexity = O(n)*/
#include<stdio.h>
int binarySearch(int a[],int l, int r,int data)
{
	while(l<=r)
	{
		int mid = (l+r)/2;
		if(a[mid]==data)
		    return mid;
		else if(a[mid]>data)
		    r = mid - 1;
		else
		    l = mid + 1;
	}
	return -1;
}
int main()
{
	int n, j, data;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array in sorted order: \n");
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
	int ans = binarySearch(a, 0, n-1, data);
	{
	    if(ans == -1)
	    	printf("Element not present in array.");
		else
	    	printf("Element is present at index %d i.e. position = %d.",ans,ans+1);
	}
}
