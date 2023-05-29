#ifndef STRING_H
#define STRING_H
#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
void simple_print_buffer(char *buffer, unsigned int size);
#endif
