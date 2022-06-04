#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: the allocated memory
 */
void *malloc_checked(unsigned int b)
{
        void *s = malloc(b);
        if (s)
                return (s);
        free(s);
        exit(98);
}
