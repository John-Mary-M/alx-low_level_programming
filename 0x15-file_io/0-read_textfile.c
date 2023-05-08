#include "main.h"

/**
 * read_textfile -  text file and prints it to the POSIX standard output.
 * @filename: pointer to the file to work with
 * @letters: number of letters to read and print
 * if file cant be read or opened returns 0
 * If file is NULL returns 0
 * if write fails or does not write the expected amount of bytes, return 0
 * Return: actual number of letters it could rerad and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_rd;
	ssize_t bytes_wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = (char *)malloc((letters + 1) * sizeof(char));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_rd = read(fd, buf, letters);
	if (bytes_rd == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	bytes_wr = write(STDOUT_FILENO, buf, bytes_rd);
	if (bytes_wr == -1 || bytes_wr != bytes_rd)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);

	return (bytes_wr);
}
