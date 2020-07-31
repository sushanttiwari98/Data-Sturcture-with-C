//Jump Search
/*Time Complexity = O((n/m)+(m-1))
  Space Complexity = O(n)*/
#include<stdio.h>
#include<math.h>
int jump_search(int a[], int data, int n)
{
	int m = sqrt(n);                                     //block size to be jumped.
	int low = 0;
	while(a[m] <= data && m < n)                        //finding block where data is present. 
	{
		low = m;                                        //shift the block
		m += sqrt(n);
		if(m > n-1)                                     //if m exceed the array size.
		    return -1;
	}
	for(int i = low; i < m; i++)                        //linear search in current block
	{
		if(a[i]==data)
		    return i;                                   //index of element being searched.
	}
	return -1;
	
}
int main()
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
	int ans = jump_search(a, data, n);
	{
	    if(ans == -1)
		    printf("Element not found.");
		else
		    printf("Element is at index %d i.e. position = %d.",ans,ans+1);
	}
}
