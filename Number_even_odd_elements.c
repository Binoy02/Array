/*
  Binoy Das Gupta
  C program to count total number of even and odd elements in an array.
  07-05-2021
*/

#include<stdio.h>
int main()
{
	int array[1000],n,i,e_count,o_count;
	printf("Number of elements in array = ");
	scanf("%d",&n);
	// taking inputs for array
	printf("Array : ");
	for(i=0;i<n;i++) 
	{
		scanf("%d",&array[i]);
	}
	printf("\n");
	e_count = 0;
	o_count = 0;
	for(i=0;i<n;i++)
	{
		if(array[i]%2==0)
		{
			e_count++;
		}
		else
		{
			o_count++;
		}
	}
	printf("Total number of even elements in the array is = %d\n",e_count);
	printf("Total number of odd elements in the array is = %d\n",o_count);
	return 0;
}
