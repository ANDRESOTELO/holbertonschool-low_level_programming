#include "holberton.h"

/**
 *create_file - Function that creates a file.
 *@filename: pointer to file
 *@text_content: text string
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int new_file, count;
	int wrt;

	if (!filename)
		return (-1);

	/*open with the flag O_CREAT creates a file*/
	new_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);

	if (new_file == -1)
		return (-1);

	if (text_content)
	{
		for (count = 0; text_content[count] != '\0'; count++)
		{
		}
			/*new_file is the file descriptor (3)*/
			/*text_content is the text that writes in the new file*/
		wrt = write(new_file, text_content, count);
		if (wrt == -1)
			return (-1);
	}
	close(new_file);
	return (1);
}
