#include "main.h"
/**
 * largestPrimeFactor - prints the largest prime factor
 * main - check the code
 * @number: input of the function
 *
 *Return : Always 0
*/

long long int largestPrimeFactor(long long int number)
{
	long long int largestFactor = -1;
	
	while (number % 2 == 0)
	{
		largestFactor = 2;
		number /= 2;
	}
	for (long long int i = 3; i * i <= number; i += 2)
	{
		while (number % i == 0)
		{
			largestFactor = i;
			number /= i;
		}
	}
	if (number > 2)
		largestFactor = number;
	return (largestFactor);
}

int main(void)
{
	long long int number = 612852475143;
	long long int largestFactor = largestPrimeFactor(number);
	
	printf("%lld\n", largestFactor);
	return (0);
}
