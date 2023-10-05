#include "main.h"
#include <unistd.h>
/**
*_putchar - writes the character c to stout
*
*Return: on (Success) 1
*on error, -1 is returned, error set appropriately
*/
int _putchar(char c)
{
        return (write(1, &c, 1));
}
