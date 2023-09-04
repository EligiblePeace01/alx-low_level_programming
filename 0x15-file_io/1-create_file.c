#include "main.h"
#include <stddef.h>

/**
 * create_file - Create a file and write content
 * @filename: Name of the file to create
 * @text_content: Content to be written to file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, write_f, text_len;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);
	/* Calculate string lengnt of the text content*/
	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len];)
			text_len++;
	}


	/* Open the file with write, create, and truncate flags */
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	/* Write text_content to the file if it's not NULL */
	if (text_content != NULL)
	{
		write_f = write(file, text_content, text_len);
		if (write_f == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (1);
	}
}
