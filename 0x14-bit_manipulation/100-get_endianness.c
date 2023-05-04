#include "main.h"

/**
 * get_endianness - checking if the machine is a little or big endian
 * Return: value 0 for big,value 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
