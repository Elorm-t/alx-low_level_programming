#include "main.h"

/**
 * str_len - gets length of string
 * @str: charactere pointer to string
 *
 * Return: length of string
 */

int str_len(char *str)
{
	int ctr;

	if (*str == '\0')
		return (0);

	ctr = 1 + str_len(str + 1);

	return (ctr);
}

/**
 * helper_fn - iterate recursively to compare charaters of string
 * @str: character pointer to string
 * @l: beginning index of string
 * @r: end index of string
 *
 * Return: 0 if not palindrome, 1 if palindrome
 */

int helper_fn(char *str, int l, int r)
{
	if (l >= r)
		return (1);
	if (str[l] == str[r])
		return (helper_fn(str, l + 1, r - 1));

	return (0);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: character pointer to string
 *
 * Return: 0 if not palindrome, 1 if palindrome
 */

int is_palindrome(char *s)
{
	int len = str_len(s);
	int i = 0;

	if (len == 0 || len == 1)
		return (1);
	else
		return (helper_fn(s, i, len - 1));
}
