#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
* main - parses an elf header file
*
* @argc: number of args
* @argv: arugment strings
*
* Return: 0 on success
* 1 on incorrect arg number
* 2 on file open failure
* 3 on read failure
* 4 on failure to read enough bytes for a 32 bit file
* 98 if elf magic is not matched
*/
int main(int argc, char **argv)
{
	int file_handle, l_read;
	char head[32];
	
	if (argc != 2)
		return (1);

	file_handle = open(argv[1], O_RDONLY, 0600);
	if (file_handle == -1)
		return (2);
	l_read = read(file_handle, head, 32);
	if (l_read == -1)
		return (3);
	if (l_read < 28)
		return (4);
	if (head[0] != 0x7f || head[1] != 'E' || head[2] != 'L' || head[3] != 'F')
	{
		dprintf(STDERR_FILENO,
			"readelf: Error: hellofile: Failed to read file header\n");
		return (98);
	}
	printf("ELF Header:\n  Magic:   ");
	for (l_read = 0; l_read < 16; l_read++)
		printf("%02x ", (unsigned int) head[l_read]);
	printf("\n");
	return (0);
}
