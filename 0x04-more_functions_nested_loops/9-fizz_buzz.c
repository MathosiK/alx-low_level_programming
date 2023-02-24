#include "main"

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for muliples of three prints fizz instead of the number 
 * and for the multiples of five prints buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 3 !=0)
		{
			priintf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			prrintf("%d", i);
		}
	}
	printf("\n");

	return(0);
}
