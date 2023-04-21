#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings -prints strings, followed by a new line.
* @separator: the string to be printed between strings.
* @n: the number of strings passed to the fucntion.
* @...: A variable number of strings to be printed.
*
*Description: If separator is NULL, it is not printed.
*	      If one of the strings if NULL, (nil)is printed instead.
*/
void print_strings(const char 'separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(list);
}
