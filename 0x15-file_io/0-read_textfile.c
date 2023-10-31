#include "main.h"

/**
 * read_textfile - Reads a text file and prints it stdout.
 * @filename: the name of the file.
 * @letters: The number of letters then function should print
 *
 * Return: returns zero or  actuall number it could  print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, letters);

	if (op == -1 || rd == -1 || wr == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
