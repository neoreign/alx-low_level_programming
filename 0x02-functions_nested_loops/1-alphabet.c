#include "_putchar.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int l = 'a';
print_alphabet();
while (l <= 'z')
{
_putchar(l);
 l += 1;
}
_putchar(10);
}
