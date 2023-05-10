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
	int fd, bytes_written, text_size = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[text_size])
			text_size++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
			if (fd == -1)
			return (-1);

			if (text_size)
				bytes_written = write(fd, text_content, text_size);
			close(fd);

			if (bytes_written != text_size)
				return (-1);

			return (-1);
}
