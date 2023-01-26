#include <stdio.h>
#include <stdlib.h>

/**                                                                             
 * struct list_s - singly linked list                                           
 * @str: string - (malloc'ed string)                                            
 * @len: length of the string                                                   
 * @next: points to the next node                                               
 *                                                                              
 * Description: singly linked list node structure                               
 * for your project                                                        
 */
typedef struct list_s
{
        char *str;
        unsigned int len;
        struct list_s *next;
} list_t;

int main(void)
{
        int n = 5;
	int array[5];
	int i = 3;

	array[n] = i;
        return (0);
}
