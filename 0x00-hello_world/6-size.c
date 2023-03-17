#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of a character is: %lu bytes(s)\n",
(unsigned long)sizeof(char));
	printf("The size of an integer is: %lu bytes(s)\n",
(unsigned long)sizeof(int));
	printf("The size of a long int is: %lu bytes(s)\n",
(unsigned long)sizeof(long int));
	printf("The size of a long long int is: %lu bytes(s)\n",
(unsigned long)sizeof(long long int));
	printf("The size of a float is: %lu bytes(s)\n",
(unsigned long)sizeof(float));
	return (0);
}
