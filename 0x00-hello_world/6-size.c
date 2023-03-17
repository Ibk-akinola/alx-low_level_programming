#!/bin/bash
#include <stdio.h>


int main(void) {
	int i;
	char c;
	float f;

	printf("The size of an integer is: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("The size of a character is: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("The size of a float is: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
