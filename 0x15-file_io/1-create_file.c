#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the file to be created
 * @text_content: NULL terminated string to write to the file
 * The created file must have those permissions: rw-------. If the file already
 * exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 * Return: 1 on success, -1 on failure (file can not be created, file can't be
 * written, write “fails”, etc…).
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
        int contentLen = 0;
	ssize_t bytesWr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[contentLen])
			contentLen++;

		bytesWr = write(fd, text_content, contentLen);
		if (bytesWr == -1)
			return (-1);
	}
	if (close(fd) == -1)
		return (-1);

	return (1);
}
