#include "main.h"


/**
 * *cap_string - capitalizes every
 * word of a string
 *
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int index, speIndex;
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	spe += {'!', '?', '"', '(', ')', '{', '}'};
	for (index = 0; s[index] != '\0'; index++)
	{
		if (index == 0 && s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;
		for (speIndex = 0; speIndex < 13; speIndex++)
		{
			if (s[index] == spe[speIndex])
			{
				if (s[index + 1] >= 'a' && s[index + 1] <= 'z')
				{
					s[index + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
