#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file.
* @filename: source file
* @text_content: text content for file
* Return: file created
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_handle, strc = 0;
	char *ptr;

	if (!filename)
		return (-1);

	file_handle = open(filename, O_WRONLY | O_APPEND);
	if (file_handle == -1)
		return (-1);

	if (text_content)
	{
		for (strc = 0, ptr = text_content; *ptr; ptr++)
			strc++;
		write(file_handle, text_content, strc);
	}

	close(file_handle);
	return (1);
}
