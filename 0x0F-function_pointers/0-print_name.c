#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input parameter for name
 * @f: pointer to print name function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
