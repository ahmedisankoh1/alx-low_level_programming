#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: returns 1 on success and 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while ( text_content[i] != '\0')
			i++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, i);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
