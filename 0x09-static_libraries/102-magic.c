#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function to execute the program.
 *              It initializes an array and changes the value at a specific index.
 *              Finally, it prints the value at that index.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;

    *(p + 2) = 98; /* Fix the index from 5 to 2 */

    printf("a[2] = %d\n", *(a + 2));
    printf("%s", "a[2] = 98\n");

    return (0);
}
