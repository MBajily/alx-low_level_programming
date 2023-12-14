#include "main.h"


int _isdigit(int c)
{
	int i;

	if (c == NULL)
	{
		return (0);
	}
	for (i = 0; c[i] != '\0'; i++)
	{
		if (!(c[i] >= '0' && c[i] <= '9'))
		{
			return (0);
		}
	}
	return (1);
}


int _isalpha(int c)
{
	int i;

	if (c == NULL)
	{
		return (0);
	}
	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] < '0' || c[i] > '9'))
		{
			return (1);
		}
	}
	return (0);
}

int _strlen(char *s)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}


int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char *_strcat(char *dest, char *src)
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
