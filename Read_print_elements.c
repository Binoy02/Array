/*
  Binoy Das Gupta
  C program to read and print elements of array.
  05-05-2021
*/

#include<stdio.h>
int main()
{
	int n,ara[n],i;
	printf("Enter number of elements = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ara[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("ara[%d] = %d\n",i,ara[i]);
	}
	return 0;
	
}
