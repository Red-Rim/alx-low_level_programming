#include "main.h"

/*Red-Rim*/
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the same of the file
 * @text_content: the text to append to the file
 * Return: 1 on success, or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int s, kteb, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	s = open(filename, O_WRONLY | O_APPEND);
	kteb = write(s, text_content, len);

	if (s == -1 || kteb == -1)
		return (-1);
	close(s);

	return (1);
}
