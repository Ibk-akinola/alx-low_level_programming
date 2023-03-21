#include "main.h"
/**
  * main - print _putchar
  *
  * Return: Always 0.
  */

int main(void)

{

	char p[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(p[i]);
	}
	putchar('\n');
	return (0);

}
