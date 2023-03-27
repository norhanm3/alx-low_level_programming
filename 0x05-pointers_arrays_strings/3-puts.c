#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
#include <stdio.h>
void _puts(char *);
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char *str;
str = "Holberton!";
_puts(str);
return (0);
}
