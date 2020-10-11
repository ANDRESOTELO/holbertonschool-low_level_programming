/**
 *This program prints a character 
 */
int _putchar(char c);

/**
 *Prototype that checks an upper characters.
 */
int _isupper(int c);

/**
 *
 */
int _islower(int c);

/**
 *
 */
int _isalpha(int c);

/**
 *
 */
int _abs(int);

/**
 *Prototype to checks digiti characters.
 */
int _isdigit(int c);

/**
 *_strlen - returns length of a string
 */
int _strlen(char *s);

/**
 *_puts - print a string like puts function
 */
void _puts(char *str);

/**
 *_strcpy - function that copies the string pointed to by src
 */
char *_strcpy(char *dest, char *src);

/**
 *
 */
int _atoi(char *s);

/**
 *Function that concatenates two strings.
 */
char *_strcat(char *dest, char *src);

/**
 *function that concatenates two strings.
 */
char *_strncat(char *dest, char *src, int n);

/**
 *Function that copies a string.
 */
char *_strncpy(char *dest, char *src, int n);

/**
 *_strcmp - function that compares two strings.
 */
int _strcmp(char *s1, char *s2);

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
 *
 */
char *_strpbrk(char *s, char *accept);

/**
 *function that locates a substring.
 */
char *_strstr(char *haystack, char *needle);
