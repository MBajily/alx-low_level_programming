#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

extern char **environ;

int _isletter(char *str);
int _isdigit(char *str);
int _strcmp(const char *str1, const char *str2);
void _strcat(char *dest, const char *src);
char _str_duplicate(const char *str);
size_t _strlen(const char *str);
void _strcpy(char *dest, const char *src);
void _strcat(char *dest, const char *src);

#endif /* MAIN_H */
