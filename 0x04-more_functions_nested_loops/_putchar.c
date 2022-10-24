#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to student
 * @c: The character to print
 * Return: On succcess 1 else -1
 */
int _putchar(char c)

	return (write(1, &c, 1));

