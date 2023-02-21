#include "main.h"

/**
 *main - prints _putchar, followed by a new line.
 *Return: 0 on success
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

	return (0);
}
