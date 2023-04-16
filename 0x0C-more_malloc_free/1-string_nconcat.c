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
	unsigned int i, j, len1, len2;

	/*check if the string are null*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*compute the length of the string.*/

	for (len1 = 0; s1[len1] != '\0'; len1++)

	for (len2 = 0; s2[len2] != '\0'; len2++)

	/*Memory reservation_for case 1 & 2.*/

	s = malloc(len1 + n + 1);

	if (s == NULL)
	{
		return (NULL);
	}

		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];

		for (j = 0; j < n ; j++)
		{
			s[i] = s2[j];
			i++;
		}

		s[i] = '\0';
		return (s);
}
