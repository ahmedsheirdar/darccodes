#include<stdio.h>
#include<stdlib.h>

/* Rand Function Starts*/
int random_numbers()
{
   int i, n;
   time_t t;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));
   n=1;

   for( i = 0 ; i < n ; i++ ) 
   {
   		return(rand() % 50);
   }
   
   return(0);
}
/* Rand Function Ends*/

int main()
{
	
	int n, generated_number, /* *random_value,*/ i, guess_number, guess_try;
	n=1;
	generated_number = random_numbers(n);
//	random_value = (int *)malloc(n*sizeof(int));
//	random_value[i] = random_numbers;
	
	printf("Please enter guess number:\n");
	guess_try=0;
	while(guess_try<8)
	{
		scanf("%d",&guess_number);
		if(guess_number<generated_number)
		{
			printf("Lower than generated Number:\n");
			printf("Next Guess:\n");
		}
		else if(guess_number>generated_number)
		{
			printf("Greater than generated Number:\n");
			printf("Next guess:\n");
		}
		else
		{
			printf("Equal to the generated Number:\n");
			printf("Next guess");
		}
		guess_try++;
	}
	
return 0;
}
