/*
  Binoy Das Gupta
  C program to put even and odd elements of array in two separate array.
  07-05-2021
*/

#include<stdio.h>
int main()
{
	int array[1000],n,i,e_array[1000],o_array[1000];
	printf("Enter size of the array = ");
	scanf("%d",&n);
	printf("Array = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Even array = ");
	for(i=0;i<n;i++)
	{
		if(array[i]%2 == 0)
		{
			e_array[i] = array[i];
			printf("%d ",e_array[i]);
		}
	}
	printf("\n");
	printf("Odd array = ");
	for(i=0;i<n;i++)
	{
		if(array[i]%2 != 0)
		{
			o_array[i] = array[i];
			printf("%d ",o_array[i]);
		}
	}
	return 0;
}
