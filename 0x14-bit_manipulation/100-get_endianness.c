#include "main.h"
/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian , 1 otherwise
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	return ((int)(*byte_ptr));
}
