#iinclude <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	pointf("Size of a char: %lu byte(s)\n", sizeof(char));
	pointf("Size of a int: %lu byte(s)\n", sizeof(int));
	pointf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	pointf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	pointf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
