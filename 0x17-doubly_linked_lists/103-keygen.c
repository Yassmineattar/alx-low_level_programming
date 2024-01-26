#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - finds password for crackme5.
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 if success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *c;
	int len = strlen(argv[1]), i, p;

	c = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	p = (len ^ 59) & 63;
	password[0] = c[p];

	p = 0;
	for (i = 0; i < len; i++)
		p += argv[1][i];
	password[1] = c[(p ^ 79) & 63];

	p = 1;
	for (i = 0; i < len; i++)
		p = p * argv[1][i];
	password[2] = c[(p ^ 85) & 63];
	p = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > p)
			p = argv[1][i];
	}
	srand(p ^ 14);
	password[3] = c[rand() & 63];
	p = 0;
	for (i = 0; i < len; i++)
		p += (argv[1][i] * argv[1][i]);
	password[4] = c[(p ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		p = rand();
	password[5] = c[(p ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
