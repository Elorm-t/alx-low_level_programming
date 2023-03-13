#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: character pointer to first string
 * @s2: character pointer to second string
 *
 * Return: NULL on failure, or character pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = j = k = l = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	int arr_len = i + j + 1;

	arr = malloc(sizeof(s1) * i + sizeof(s2) * j + 1);

	if (arr == 0)
		return (NULL);

	for (; k < arr_len; k++, l++)
	{
		if (k < i)
			arr[k] = s1[k];
		arr[k] = s2[l];
	}
	arr[l] = '\0';

	return (arr);
}
