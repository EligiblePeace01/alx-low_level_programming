#include "main.h"
#include <stddef.h>

/**
 * append_text_to_file - Appends text to end of a file.
 * @filename: name of the file.
 * @text_content:  content to be appended.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
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

	/* Open the file with write and append flags */
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	/* Append text_content to the file if it's not NULL */
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
