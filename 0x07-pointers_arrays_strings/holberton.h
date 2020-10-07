/**
 *Function that fills memory with a constant byte.
 */
char *_memset(char *s, char b, unsigned int n);

/**
 *Function that copies memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 *_strchr - function that locates a character in a string.
 */
char *_strchr(char *s, char c);

/**
 *function that gets the length of a prefix substring.
 */
unsigned int _strspn(char *s, char *accept);

/**
 *function that locates a substring.
 */
char *_strstr(char *haystack, char *needle);


/**
 *function that sets the value of a pointer to a char.
 */
void set_string(char **s, char *to);

/**
 * function that prints the chessboard.
 */
void print_chessboard(char (*a)[8]);

/**
 *This program prints a character 
 */
int _putchar(char c);
