#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;

	printf("The size of an integer is: %lu bytes(s)\n",
	(unsigned long)sizeof(i));
	printf("The size of a character is: %lu bytes(s)\n", 
	(unsigned long)sizeof(c));
	printf("The size of a float is: %lu bytes(s)\n",
	(unsigned long)sizeof(f));
	printf("The size of a long int is: %lu bytes(s)\n",
	(unsigned long)sizeof(li);
	printf("The size of a long long int is: %lu bytes(s)\n",
        (unsigned long)sizeof(lli);
	return (0);
}
