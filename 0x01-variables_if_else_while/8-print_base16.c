#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int letter;
for (letter = 48 ; letter < 58; letter++)
{
putchar(letter);
}
for (letter = 97 ; letter <103; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
