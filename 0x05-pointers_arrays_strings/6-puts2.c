#include "main.h"
/**
* puts2 - print every character
* @str: a pointer
* Return: void method
*/
void puts2(char *str)
{
  int a;

  for (a = 0; str[a] != '\0'; a++)
{
  if (a % 2 == 0)
  putchar (str[a]);
}

  putchar ('\n');
}
