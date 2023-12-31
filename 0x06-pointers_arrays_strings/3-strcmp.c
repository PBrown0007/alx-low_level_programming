#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Negative if s1 is less than s2, positive if s1 is greater than s2,
 *         and 0 if s1 is equal to s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && (s1[i] == s2[i]))
		i++;

	return (s1[i] - s2[i]);
}
