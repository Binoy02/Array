/*
  Binoy Das Gupta
  C program to find maximum and minimum element in an array.
  06-05-2021
*/

#include<stdio.h>
int main()
{
	int arr[1000],n,i;
	printf("Number of elements in the array = ");
	scanf("%d",&n);
	printf("Array elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for(i=1;i<n;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("Maximum element of the array is = %d\n",max);
	int min = arr[0];
	for(i=1;i<n;i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("Minimum element of the array is = %d\n",min); 
	return 0;
}
