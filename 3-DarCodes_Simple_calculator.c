#include<stdio.h>
#include<stdlib.h>

float add(float a, float b)
{
	//float a, b;
	return a+b;
}
float multiply(float a, float b)
{
	//float a, b;
	return a*b;
}
float subtract(float a, float b)
{
	//float a, b;
	return a-b;
}
float divide(float a, float b)
{
	//float a, b;
	return a/b;
}

float main()
{
	float x, y, answer,operation;
	
	printf("Please enter operation:\n1 for addition:\n2 for multiplication:\n3 for Subtraction:\n4 for division:\n");
	scanf("%f",&operation);
	
	printf("Please enter variable x:\n");
	scanf("%f",&x);
	
	printf("Please enter variable y:\n");
	scanf("%f",&y);
	
	if(operation==1)
	{
		add(x,y);
		answer = add(x,y);
		printf("Answer of operation is %f",answer);
	}
	else if(operation==2)
	{
		multiply(x,y);
		answer = multiply(x,y);
		printf("Answer of operation is %f",answer);
	}
	else if(operation==3)
	{
		subtract(x,y);
		answer = subtract(x,y);
		printf("Answer of operation is %f",answer);
	}
	else if(operation==4)
	{
		if(y==0)
		{
			printf("division by 0 is not possible:");
		}
		else
		{
			divide(x,y);
			answer = divide(x,y);
			printf("Answer of operation is %f",answer);
		}
	}
	else
	{
		printf("Invalid Argument ");
	}
	getch();
return 0;
}
