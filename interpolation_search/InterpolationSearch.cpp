//Interpolation Search.............Works oly for sorted array.
/**/
#include<stdio.h>
int interpolation_search(int a[],int data, int n)
{
	int low=0, high = (n-1),position;
	while(low<=high && a[low]<=data && a[high]>=data)
	{
		position = low + ((data-a[low])*(high-low)/(a[high]-a[low]));
		if(a[position]=data)
		    return position;
		else if(a[position]<data)
		    low = position + 1;
		else
		    high = position - 1;
	}
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
	int ans = interpolation_search(a, data, n);
	{
	    if(ans == -1)
		    printf("Element not found.");
		else
		    printf("%d is at index %d i.e. position = %d.",data,ans,ans+1);
	}
}

