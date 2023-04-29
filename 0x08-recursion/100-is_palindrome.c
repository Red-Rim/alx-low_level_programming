#include "main.h"

/*Red-Rim*/
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to count
 * Return: lenght of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if @s the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	if (*s == *(s + len - 1))
		return (is_palindrome(s + 1) && 1);
	return (0);
}
