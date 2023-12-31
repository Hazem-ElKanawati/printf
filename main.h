#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


int _printf(const char *format, ...);
void _puts(char *str);
int _strlen(const char *s);
int _putchar(char c);
char *handle_int(int x);
void rev_string(char *s);
char *int_to_binary(unsigned int x);


#endif
