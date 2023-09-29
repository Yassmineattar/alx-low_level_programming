#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *@n: pointer
 *@index: index
 * Return: result
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (!!(*n |= 1L << index));
}
