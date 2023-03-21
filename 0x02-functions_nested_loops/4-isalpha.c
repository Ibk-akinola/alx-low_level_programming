#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */


int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		c = 1;
	else
		c = 0;

	return (c);
}
