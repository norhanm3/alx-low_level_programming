/**
 * print_rev - Prints a string in reverse, followed by a new line.
 *
 * @s: Pointer to the string to be printed.
 *
 * Return: void.
 */
void print_rev(char *s)
{
int len = 0;
int i;
/* Get the length of the string */
while (s[len] != '\0')
len++;
/* Print the string in reverse order */
for (i = len - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
