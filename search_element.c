/*
  Binoy Das Gupta
  C program to search an element in an array.
  07-05-2021
*/

#include<stdio.h>
int main()
{
	int array[1000],n,search_element,i,pos;
	printf("Enter the size of the array = ");
    scanf("%d",&n);
    printf("Array = ");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&array[i]);
	}
	printf("Enter the search element = ");
	scanf("%d",&search_element);
	pos = -1;
	for(i=0;i<n;i++)
	{
		if(search_element == array[i])
		{
			pos = i + 1;
			break;
		}
	}
	if(pos==-1)
	{
		printf("Element is not found\n");
	}
	else
	{
		printf("The element, %d is at position %d\n",search_element,pos);
	}
	return 0;
}
