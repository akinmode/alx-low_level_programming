#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void copy_file(const char *src, const char *dest);

/**
* main - Init program
* @argc: argument count
* @argv: argument vector
* Return: run application
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
* copy_file - program that copies the content
* of a file to another file.
* @src: ...
* @dest: ...
* Return: ...
*/
void copy_file(const char *src, const char *dest)
{
	int ofile_handle, nfile_handle, l_read;
	char buff[1024];

	ofile_handle = open(src, O_RDONLY);
	if (!src || ofile_handle == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	nfile_handle = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((l_read = read(ofile_handle, buff, 1024)) > 0)
	{
		if (write(nfile_handle, buff, l_read) != l_read || nfile_handle == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (l_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(ofile_handle) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ofile_handle);
		exit(100);
	}

	if (close(nfile_handle) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", nfile_handle);
		exit(100);
	}
}
