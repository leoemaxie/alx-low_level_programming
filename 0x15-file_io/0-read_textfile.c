#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX STDOUT.
 *
 * @filename: Pointer to the text file.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it read and printed.
 * 0 in the following scenerios:
 *		if the file can not be opened or read.
 *		if filename is NULL.
 *		if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = filename ? open(filename, O_RDONLY) : -1;
	char buf[1024];
	int reads;
	ssize_t len = -1;

	if (file == -1)
		return (0);

	reads = read(file, &buf, letters);
	close(file);

	if (reads != -1)
		len = write(STDOUT_FILENO, &buf, (size_t)reads);

	if (len < 0 || reads != (int)len)
		return (0);

	return (len);
}
