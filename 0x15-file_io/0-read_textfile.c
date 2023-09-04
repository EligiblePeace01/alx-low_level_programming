#include "main.h"
#include <stddef.h>

/**
 * read_textfile - reads and prints the content of a text file.
 * @filename: name of file to be read.
 * @letters: number of the letters to be read and printed.
 *
 * Return: number of the letters read and printed, or 0 if failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, read_f, write_f;
	char *buffer;

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(*buffer) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	/* Open the file for reading */
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	/* Read from the file into the buffer */
	read_f = read(file, buffer, letters);
	if (read_f == -1)
		return (0);
	buffer[read_f] = '\0';

	/* Print the contents of the buffer to standard output */
	write_f = write(STDOUT_FILENO, buffer, read_f);
	if (write_f != read_f)
		return (0);

	/* Release memory and close the file */
	free(buffer);
	close(file);

	/* Return the number of characters read and printed */
	return (read_f);
}
