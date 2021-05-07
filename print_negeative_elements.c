/*
  Binoy Das Gupta
  C program to print all negative elements in array.
  05-05-2021
*/

#include<stdio.h>
int main()
{
	int ara[1000];
	int i,n;
	printf("Enter elements of array = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ara[i]);
	}
	printf("Negative elements : ");
	for(i=0;i<n;i++)
	{
		if(ara[i]<0)
		{
			printf("%d ",ara[i]);
		}
	}
	return 0;
}
