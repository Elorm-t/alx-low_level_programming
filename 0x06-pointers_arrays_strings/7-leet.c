#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: character pointer to string
 *
 * Return: charater pointer to encoded string
 */

char *leet(char *str)
{
	int i = 0, j;
	int ch[] = {'a', 'e', 'o', 't', 'l'};
	int nums[] = {'4', '3', '0', '7', '1'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] = ch[j] || str[i] == (ch[j] - 32))
			{
				str[i] = nums[j];
				break;
			}
		}
		i++;
	}

	return (str);
}
