#include "main.h"

/**
 * die - Terminates the program when an error is encountered and prints
 * the appropriate message to STDERR.
 *
 * @msg: The error message to print.
 * @name: Name of the argument which caused errors on executing..
 * @err: The exit status code.
 *
 * Return: Nothing.
 */
void die(const char *msg, const char *name, int err)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, name);
	exit(err);
}

/**
 * close_fd - Closes a file descriptor and prints an error message to STDERR
 * when an error is encountered.
 *
 * @fd: The file descriptor to close.
 *
 * Return: Nothing.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: Number of command line arguments.
 * @argv: Pointer to the array of command line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, reads;
	char buf[1024];

	if (argc != 3)
		die("Usage: cp file_from file_to", "", 97);

	file_from = argv[1] ? open(argv[1], O_RDONLY) : -1;
	file_to = argv[2] ? open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664) : -1;

	if (file_from == -1)
		die("Error: Can't read from ", argv[1], 98);
	if (file_to == -1)
		die("Error: Can't write to ", argv[2], 99);

	while (1)
	{
		reads = read(file_from, &buf, 1024);

		if (reads == 0)
			break;
		if (reads == -1)
			die("Error: Can't read from ", argv[1], 98);

		if (write(file_to, &buf, (size_t)reads) == -1)
			die("Error: Can't write to", argv[2], 99);
	}

	close_fd(file_from);
	close_fd(file_to);
	return (0);
}
