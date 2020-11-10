#include "holberton.h"

/**
 *read_textfile - Function reads text file and prints it to the standard output
 *@filename: pointer to file
 *@letters: size of file
 *Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	char *file;
	ssize_t wrt, rd;

	/*if file doesn´t exist return 0*/
	if (!filename)
		return (0);

	/*open is a system call + address of file name and mode*/
	file_des = open(filename, O_RDONLY);
	/*if file_des fails*/
	if (file_des == -1)
		return (0);
	/*i have to create a space of memory for the file*/
	file = malloc(sizeof(char) * letters);
	/*if malloc files*/
	if (!file)
		return (0);

	rd = read(file_des, file, letters);
	if (rd == -1)
		return (0);

	wrt = write(STDOUT_FILENO, file, rd);

	/*if open, we have to close, like malloc and free*/
	close(file_des);

	return (wrt);
}
