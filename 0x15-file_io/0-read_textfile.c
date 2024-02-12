#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - a function that reads a text file and prints it to output.
* @filename: file to be read
* @letters: number of letters to be read from the file
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
