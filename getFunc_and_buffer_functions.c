#include "main.h"

/**
 * get_func - returns a function
 * @i: identifier for a function
 * Return: Pointer to a function
 */
char* (*get_func(char i))(va_list)
{
	int k = 0;

	print keys[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{'i', print_d},
		{'b', itob},
		{'R', rot13},
		{'r', rev_string},
		{'o', itoOctal},
		{'\0', NULL}
	};

	while (keys[k].id != '\0')
	{
		if (keys[k].id == i)
			return (keys[k].func);
		k++;
	}
	return (NULL);
}

/**
 * create_buffer - Creates buffer to hold string until it's ready for print
 * Return: pointer to a buffer created
 */

char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

/**
 * write_buffer - prints a buffer, then frees it and frees va_list
 * @buffer: a buffer holding print-ables
 * @len: length of a print-able string
 * @list: va_list
 */

void write_buffer(char *buffer, int len, va_list list)
{
	char *buff;

	buff = realloc(buffer, len); /* realloc to correct size */
	write(1, buff, len); /* print */

	free(buff); va_end(list);
}
