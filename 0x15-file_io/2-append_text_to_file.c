#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: Name of the file.
 * @text_content: A NULL terminated string to add to the end of file.
 *
 * Return: 1 on success.
 * -1 on failure. The following scenerios indicates failure:
 *		the file can not be created, read or written.
 *		filename is NULL.
 *		write fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file = filename ? open(filename,  O_RDWR | O_APPEND) : -1;

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	if (dprintf(file, "%s", text_content) < 0)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
