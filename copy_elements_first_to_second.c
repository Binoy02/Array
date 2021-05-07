/*
  Binoy Das Gupta
  C program to copy all elements from an array to another array.
  06-05-2021
*/

#include<stdio.h>
int main()
{
	int array1[1000],array2[1000],n,i;
	printf("Number of elements = ");
	scanf("%d",&n);
	printf("Input first array elements : \n");
	for(i=0;i<n;i++) // taking input for first array 
	{
		scanf("%d",&array1[i]);
	}
	printf("Array1 : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",array1[i]); // printing elements of first array
	}
	
	//copying first array elements to second array
	for(i=0;i<n;i++)
	{
		array2[i] = array1[i];
	}
	printf("\nArray2 : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",array2[i]);
	}
	return 0;
}
