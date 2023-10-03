#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file
 * @letters: number of letters
 * Return: number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t fp;
	ssize_t w;
	ssize_t r;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	r = read(fp, ch, letters);
	w = write(STDOUT_FILENO, ch, r);

	free(ch);
	close(fp);
	return (w);
}
