#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to a string
 *
 * Return:res 0 for success -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fp, w, l = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, l);

	if (fp == -1 || w == -1)
		return (-1);

	close(fp);

	return (1);
}
