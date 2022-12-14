/*
 * Task: 3-puts.c
 * Author :Megersa Oljira
 */

#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
