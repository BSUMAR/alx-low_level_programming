#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @a: the integer to check
 * Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
