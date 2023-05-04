#include "main.h"

/**
 * flip_bits - counting the numbers of the bits to be changed
 * getting from one number to another
 * @z: z is the first number
 * @u: u is the second number
 *
 * Return: the number of bits to changed
 */
unsigned int flip_bits(unsigned long int z, unsigned long int u)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = z ^ u;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
