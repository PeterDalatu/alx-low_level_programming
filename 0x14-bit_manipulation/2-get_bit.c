#include "main.h"

/**
 * get_bit - returning the values of a bit at an index in a decimal number
 * @w: w is the  number to search
 * @index: the index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int w, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (w >> index) & 1;

	return (bit_val);
}
