#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/*Function that reads a text file and prints it to the POSIX standard output.*/
ssize_t read_textfile(const char *filename, size_t letters);

/*Function that creates a file.*/
int create_file(const char *filename, char *text_content);

/*Function that appends text at the end of a file.*/
int append_text_to_file(const char *filename, char *text_content);


#endif /*_HOLBERTON_H_*/
