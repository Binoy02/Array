/*
  Binoy Das Gupta
  C program to find sum of all array elements.
  06-05-2021
*/

#include<stdio.h>
int main()
{
	int arr[1000],n,i,sum;
	printf("Enter number of elements = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum = 0;
	for(i=0;i<n;i++)
	{
		sum = sum + arr[i];
	}
	printf("Sum of array elements is = %d\n",sum);
	return 0;
}
