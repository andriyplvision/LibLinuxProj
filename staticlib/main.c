#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include <string.h>
#define SIGNSIZE 4

void check(int c)
{
	if (c==0 || c==1)
	{
		printf("Only numbers supported! Bye!\n");
		exit(1);
	}
}

int main()
{
	/**Variables
	 * a,b - operands
	 * op - opearation
	 * */
	double a=0,b=0;
	char op[SIGNSIZE] = {0};
	
	/*Inputting sign:
	 */
	printf("Please, input operation you want to peform (choose from available list): \n(available: +, -, *, /, ^, sqrt)\n");
	scanf("%s", op);
	
	/*Checking for availability
	 */
	if(!strcmp(op, "+"))
	{
		printf("Please, input two numbers to add:\n");	
		check(scanf("%lf %lf", &a, &b));
		printf("%lf", add(a,b));
	}
	else if(!strcmp(op, "-"))
	{
		printf("Please, input two numbers to subtract:\n");	
		check(scanf("%lf %lf", &a, &b));
		printf("%lf", minus(a,b));
	}
	else if(!strcmp(op, "*"))
	{
		printf("Please, input two numbers to multiply:\n");	
		check(scanf("%lf %lf", &a, &b));
		printf("%lf", mul(a,b));
	}
	else if(!strcmp(op, "/"))
	{
		printf("Please, input two numbers to divide:\n");	
		check(scanf("%lf %lf", &a, &b));
		if(!b)
		{
			printf("You had to be taught in school about dividing by zero dude:(\n");
			exit(1);
		}
		printf("%lf", d(a,b));
	}
	else if(!strcmp(op, "^"))
	{
		printf("Please, input two numbers to power:\n (format: number, power)\n");	
		check(scanf("%lf %lf", &a, &b));
		if( ((int)(1/b))%2 == 0 && a<0)
		{
			printf("You had to be taught in school about finding root of negative number:(\n");
			exit(1);
		}

		printf("%lf", p(a,b));
	}
	else if(!strcmp(op, "sqrt"))
	{
		printf("Please, input one number to find square root from:\n");	
		if(scanf("%lf", &a)==0);
		if(a<0)
		{
			printf("You had to be taught in school about finding root of negative number:(\n");
			exit(1);
		}
		printf("%lf", s(a));
	}
	else printf("Your operation is not valid! Go and find another calculator:)\n");

	return 0;
}	
