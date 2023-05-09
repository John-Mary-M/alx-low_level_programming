#include "main.h"

/**
 * main - program that copies contents of a file to another
 * @argc: argument count
 * @argv: array of aguments
 * Return: 0 on success.
 */
int main (int argc, char **argv)
{
	int fdsrc, fdDest, bytes_wr, bytes_rd;
	char buff[1024];

	/*check if there are 3 arguments*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*Open src file */
	fdsrc = open(argv[1], O_RDONLY);
	if (fdsrc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	/*Open destination file*/
	fdDest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdDest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/*read src file*/
	while ((bytes_rd = read(fdsrc, buff, 1024)) > 0)
	{
		bytes_wr = write(fdDest, buff, bytes_rd);
		if (bytes_wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			exit(99);
		}
	}
	if (bytes_rd == -1) /*check if read contents are valid*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	if (close(fdsrc) == -1) /*close src file*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdsrc);
		exit(100);
	}
	if (close(fdDest) == -1) /*close destination file*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdDest);
		exit(100);
	}
	return (0);
}
