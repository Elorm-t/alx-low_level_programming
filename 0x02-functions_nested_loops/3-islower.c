#include "main.h"

/**
 * _islower - Checks for lower-case character.
 * @c: The character to be checked
 *
 * Description: A function that checks if an input is lower-case
 * or not.
 *
 * Return: 1 if the character is lower-case. 0 is otherwise
 */

int islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
