#include "main.h"

/**
 * binary_to_uint - the binary number to be conerted to unsigned int
 * @d: the string that containing binary number
 *
 * Return: the value of the converted number
 */
unsigned int binary_to_uint(const char *d)
{
	int i;
	unsigned int dec_val = 0;

	if (!d)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (d[i] < '0' || d[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (d[i] - '0');
	}

	return (dec_val);
}
