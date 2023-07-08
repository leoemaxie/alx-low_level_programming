#include "main.h"

/**
 * create_file - Creates a file.
 *
 * @filename: Name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success.
 * -1 on failure. The following scenerios indicates failure:
 *		the file can not be created, read or written.
 *		filename is NULL.
 *		write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file = filename ? open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600) : -1;

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
