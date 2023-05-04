#include <unistd.h>
#include "main.h"

/**
 * _putchar - the character p to be written to stdout
 * @p:character to be printed
 *
 * Return:  Value 1 on sucess.
 * Value -1 on errno, and errno is set appropriately.
 */
int _putchar(char p)
{
        return (write(1, &p, 1));
}
