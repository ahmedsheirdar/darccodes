#include<stdio.h>
#include<stdlib.h>


float convert_to_fahrenheit(float Tcels, float Tfahr)
{
	return Tfahr = Tcels * 1.8 + 32;
}
float convert_to_celsius(float Tcels, float Tfahr)
{
	return Tcels = (Tfahr - 32) / 1.8;
}


/* Main Function Starts Here */
float main()
{
	float Tc, Tf, Tcelsius, Tfahrenheit;
	int temp_type;
	
	printf("Please tell in which temerature type you want your temperature to be:\n");
	printf("choose 1 if Celsius:\n");
	printf("choose 2 if Fahrenheit:\n");
	scanf("%d",&temp_type);
	
	if(temp_type==1)
	{
		printf("Please enter temperature in Fahrenheit:\n");
		scanf("%f",&Tf);
		//return convert_to_celsius(Tc, Tf);
		Tcelsius = convert_to_celsius(Tc, Tf);
		printf("Temperature in Celsius is:%f",Tcelsius);
	}
	else if(temp_type==2)
	{
		printf("Please enter temperature in Celsius:\n");
		scanf("%f",&Tc);
		//return convert_to_celsius(Tc, Tf);
		Tfahrenheit = convert_to_fahrenheit(Tc, Tf);
		printf("Temperature in Fahrenheit is:%f",Tfahrenheit);
	}
	else
	{
		printf("Invalid Argument:");
	}
	getch();
return 0;
}
