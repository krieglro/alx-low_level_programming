#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: str passed as parameter
 */

void puts2(char *str)
{
	int length, i;

	length = strlen(str);
	for (i = 0; i < length; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

