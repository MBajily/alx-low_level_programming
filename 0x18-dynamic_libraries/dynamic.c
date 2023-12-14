#include "main.h"

int _isdigit(char *str)
{
	int i;

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
	}
	return (1);
}


int _isalpha(char *str)
{
	int i;

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] < '0' || str[i] > '9'))
		{
			return (1);
		}
	}
	return (0);
}


size_t _strlen(const char *str)
{
	size_t len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}


void _strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}


char _str_duplicate(const char *str)
{
	size_t len;
	char *new_string;

	len = _strlen(str) + 1;
	new_string = (char *)malloc(len);
	_strcpy(new_string, str);
}

int _strcmp(const char *str1, const char *str2)
{
	while (*str1 != '\0' && *str1 == *str2)
	{
		str1++;   str2++;
	}
	return (*str1 - *str2);
}


void _strcat(char *dest, const char *src)
{
	int frs = 0;
	int snd = 0;

	while (dest[frs] != '\0')
	{
		frs++;
	}
	while (src[snd] != '\0')
	{
		dest[frs + snd] = src[snd];
		snd++;
	}
	dest[frs + snd] = '\0';
}
