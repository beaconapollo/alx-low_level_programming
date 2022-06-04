#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: the allocated memory
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
        void *s = malloc(b);
        if (s == NULL)
        {
                free(s);
                exit(98);
        }
        return (s);
}
