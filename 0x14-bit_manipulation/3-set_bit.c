#include "main.h"

/**
 * set_bit - setting the bit at a given index to 1
 * @e:e is the pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: value 1 for success,value -1 for failure
 */
int set_bit(unsigned long int *e, unsigned int index)
{
	if (index > 63)
		return (-1);

	*e = ((1UL << index) | *e);
	return (1);
}
