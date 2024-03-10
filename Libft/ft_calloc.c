#include "libft.h"

void *calloc(unsigned long nelem, unsigned long elsize){

if (nelem == 0 || elsize == 0)
    return (NULL);

unsigned long n;
unsigned char *ptr;


n = 0;
ptr  = (void *)malloc(nelem * elsize);
if (!ptr)
    return (NULL);

while (nelem * elsize > n)
    ptr[n++] = 0;

return (ptr);
}