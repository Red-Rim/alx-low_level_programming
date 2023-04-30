#include <stdlib.h>
#include "main.h"
/*Red-Rim*/
/**
 * *string_nconcat - Write a function that concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: numb of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1 = 0, len2 = 0;

	/*check if the string are null*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*compute the length of the string.*/

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/*allocate memory for the concatenated string*/
	if (n >= len2)
		n = len2;
	s = malloc(len1 + n + 1);
	if (s == NULL)
		return (NULL);

	/* copy the first string*/
	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	/*copy the second string up to n bytes*/
	for (j = 0; j < n; j++, i++)
		s[i] = s2[j];

	/*null-terminate the resulting string*/
	s[i] = '\0';

	/*return the concatenated string*/
	return (s);
}
