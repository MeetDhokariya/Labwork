#include<stdio.h>

/*
 1D array = collection of values but all value data type are same

*/

void main()
{
	int n;
	printf("Enter Size of Array = ");
	scanf("%d",&n);
	int a[n];
	int b[n];
	int sum[100];
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\n----------------------\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	printf("\n=======================\n");
	for(i=0;i<n;i++)
	{
		sum[i] = b[i]+a[i];
		
	}
	for(i=0;i<n;i++)
	{
		printf("sum[%d] = %d\n",i,sum[i]);
		
	}
	
	
	
	
	
}
