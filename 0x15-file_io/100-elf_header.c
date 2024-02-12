#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

int display_elf_header(const char *filename);
void printclass(char *head);

/**
* main - parses an elf header file
*
* @argc: number of args
* @argv: arugment strings
*
* Return: 0 on success
*/
int main(int argc, char **argv)
{
	int result;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: ./elf_header ubuntu64\n");
		exit(98);
	}

	result =  display_elf_header(argv[1]);
	if (result != 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Failed to read file header!\n");
		exit(98);
	}
	return (0);
}

/**
* display_elf_header - displaye the content of the ELF header
* @filename: name of the header file
* Return: Always 0 on success
* 98 if elf magic is not matched
*/
int display_elf_header(const char *filename)
{

	int file_handle, l_read;
	char head[32];

	file_handle = open(filename, O_RDONLY);
	if (file_handle == -1)
		return (98);

	l_read = read(file_handle, head, 32);
	if (l_read == -1)
		return (98);
	if (head[0] != 0x7f || head[1] != 'E' || head[2] != 'L' || head[3] != 'F')
		return (98);
	printf("ELF Header:\n  Magic:   ");
	for (l_read = 0; l_read < 16; l_read++)
		printf("%02x ", (unsigned int) head[l_read]);
	printf("\n");
	printclass(head);
	return (0);
}

/**
* printclass - prints the class from an elf header
* @head: header information
* Return: void
*/
void printclass(char *head)
{
	printf("  %-35s", "Class:");
	if (head[4] == 2)
		printf("ELF64\n");
	else if (head[4] == 1)
		printf("ELF32\n");
	else
		printf("<unknown: %02hx>", head[4]);
}
