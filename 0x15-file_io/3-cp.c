#include "holberton.h"
#include <stdio.h>

/**
 *main - Entry point
 *@argc: arguments count
 *@argv: arguments value
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, file_read, file_write;
	char buffer[1024];

	/*Can use comma(,) and end of line*/
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	/*create file_from and file_to. Both are int type*/
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	/*file_from is the file where read finds the characters*/
	file_read = read(file_from, buffer, 1024);
	if (file_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	while (file_read != 0)
	{
		file_write = write(file_to, buffer, file_read);
		if (file_write == -1 || file_write != file_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
				exit(99);
		file_read = read(file_from, buffer, 1024);
		if (file_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				exit(98);
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n'", file_to), exit(100);
	return (0);
}
