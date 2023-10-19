#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str1[50] = "Hello ";
	char str2[] = "World!";
	char str3[50] = ""; /* Initialize str3 with an empty string */

	_strcat(str1, str2);
	printf("%s\n", str1); /* Output: Hello World! */

	_strcat(str3, str1);
	printf("%s\n", str3); /* Output: Hello World! */

	strcat(str1, str2);
	printf("%s\n", str1); /* Output: Hello World!World! */

	strcat(str2, str1);
	printf("%s\n", str2); /* Output: World!Hello World!World! */

	return 0;
}
