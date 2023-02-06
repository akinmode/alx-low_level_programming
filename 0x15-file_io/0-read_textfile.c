#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* read_textfile - function that reads a text file
* and prints it to the POSIX standard output.
* @filename: source file
* @letters: number of letters to read and print
* Return: prints to stdout
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_handle, l_read;
	char *temp = malloc(sizeof(char *) * letters);

	if (!temp)
		return (0);
	if (!filename)
		return (0);

	file_handle = open(filename, O_RDONLY, 0600);
	if (file_handle == -1)
		return (0);

	l_read = read(file_handle, temp, letters);
	write(STDOUT_FILENO, temp, l_read);

	free(temp);
	close(file_handle);
	return (l_read);
}
