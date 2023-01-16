#include <stdio.h>
#include <stdlib.h>

/**
* main - print name of main file the program was compiled from
* Return: 0 on success
*/

int main(void)
{
        printf("%s\n", __FILE__);
        return (EXIT_SUCCESS);
}
