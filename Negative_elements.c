/*
  Binoy Das Gupta
  C program to count total number of negative elements in an array.
  07-05-2021
*/

#include<stdio.h>
int main()
{
	int array[1000],n,i,neg;
	printf("Enter size of the array = ");
	scanf("%d",&n);
	printf("Array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\n");
	neg = 0;
	for(i=0;i<n;i++)
	{
		if(array[i]<0)
		{
			neg++;
		}
	}
	printf("Total number of negative elements in the array are = %d\n",neg);
	return 0;
}
