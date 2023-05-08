#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file. Return 1 if the
 * file exists and -1 if the file does not exist or if you do not have the
 * required permissions to write the file
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedes;
	size_t len = 0;
	ssize_t bytes_wr;
	char *current = text_content;

	if (filename == NULL)
		return (-1);
	filedes = open(filename, O_RDWR | O_APPEND);
	if (filedes == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*current != '\0')
		{
			len++;
			current++;
		}

		bytes_wr = write(filedes, text_content, len);
		if (bytes_wr == -1 || (size_t) bytes_wr != len)
		{
			close(filedes);
			return (-1);
		}
	}
	close(filedes);

	return (1);
}
