#include <stdio.h>
#include "main.h"

int main(void)
{
	int num1,num2;


	printf("Enter first numbers: ");
	scanf("%i",&num1);

	printf("Enter second numbers: ");                    scanf("%i",&num2);

    // pointer to a function
    int (*add)(int,int) = addition;
    int (*minus)(int,int) = subtraction;
    int (*multiply)(int,int) = multiplication;
    int (*divide)(int,int) = division;

    int res_add = add(num1,num2);
    printf("%i + %i = %i\n",num1,num2,res_add);

    int res_minus = minus(num1,num2);                 printf("%i - %i = %i\n",num1,num2,res_minus);

    int res_multiply = multiply(num1,num2);           printf("%i * %i = %i\n",num1,num2,res_multiply);
	
    int res_divide = divide(num1,num2);               printf("%i / %i = %i\n",num1,num2,res_divide);
	return 0;
}
