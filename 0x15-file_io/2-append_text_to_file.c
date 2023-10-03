#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the file's name
 * @text_content: The string to add
 *
 * Return:success 0 otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, w, l = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, text_content, l);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}
