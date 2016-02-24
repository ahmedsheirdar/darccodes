#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *integer_array, size_array, i, input, find, found=0;
	
	printf("Please enter size of array:\n");
	scanf("%d",&size_array);
	
	integer_array = (int *)malloc(size_array * sizeof(int));
	
	for(i=0;i<size_array;i++)
	{
		printf("Enter integer:\n");
		scanf("%d",&integer_array[i]);
	}
	
	printf("Enter Number you want to Search in the Array:");
	scanf("%d",&find);
	
	
	i = 0;
	while(i < size_array)
	{
		if(integer_array[i]==find)
		{
			found = 1;
		}
		i++;
	}
	if(found==0)
	{
		printf("Number Not Found:");
	}
	else
	{
		printf("Number Found In Array:");
	}
	/*
	for(i=0;i<size_array;i++)
	{
		if(integer_array[i]==find)
		{
			printf("%d integer Found:",find);
		}
	}
	printf("Not Found:");
	/*if(find==integer_array[i]&&find==integer_array[i-1])
	{
		printf("Integer Found:");
	}
	else
	{
		printf("Integer Not Found:");
	}*/
	getch();
	return 0;
}
