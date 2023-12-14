#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

extern char **environ;

int is_letter(char *str);
int is_digit(char *str);
int _strcmp(const char *str1, const char *str2);
void _strcat(char *dest, const char *src);
char *_str_duplicate(const char *str);
size_t _str_length(const char *str);
void _str_copy(char *dest, const char *src);
void _strcat(char *dest, const char *src);

#endif /* MAIN_H */
