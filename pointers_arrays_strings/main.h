#ifndef MAIN_H
#define MAIN_H

void reset_to_98(int *n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

void print_buffer(char *b, int size);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
#endif
