#include "main.h"

/**
 * *rot13 - encode string using rot13
 * @str: character pointer to string
 *
 * Return: character pointer to encoded string
 */

char *rot13(char *str)
{
	int i = 0, j;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == ch[j])
			{
				str[i] = enc[j];
				break;
			}
		}
		i++;
	}

	return (str);
}
