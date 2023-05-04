#include "main.h"

/**
 * clear_bit - setting the values of a given bit to 0
 * @q: q is the pointer to the number to be changed
 * @index: index of the bit to clear
 *
 * Return: value 1 for success,value -1 for failure
 */
int clear_bit(unsigned long int *q, unsigned int index)
{
	if (index > 63)
		return (-1);

	*q = (~(1UL << index) & *q);
	return (1);
}
