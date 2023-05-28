#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */
#include <stdarg.h> /* va_list */

/* helper functions */
char* (*get_func(char i))(va_list);
char *create_buffer(void);
char *_strcpy(char *dest, char *src);
char* (*get_func(char i))(va_list);
int _strlen(char *s);
void write_buffer(char *buffer, int len, va_list list);

/* printf functions */
char *rot13(va_list list);
char *print_s(va_list list);
char *print_c(va_list list);
char *print_d(va_list list);
int _printf(const char *format, ...);
char *itoOctal(va_list list);
char *itob(va_list list);
char *rev_string(va_list list);

/**
 * struct types - struct
 * @id: identifier of a type to print
 * @func: pointer to functions that print according to the identifier
 */

typedef struct types
{
	char id;
	char* (*func)(va_list);
} print;

#endif
