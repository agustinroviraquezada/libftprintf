#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2){

int i;
char *ptr;

i = 0;
while(s1[i++] != '\0');
while(s2[i++] != '\0');

ptr = (char *)malloc(i * sizeof(char));
if (!ptr)
    return (NULL);

while (*s1 != '\0') 
    *ptr++ = *s1++;
while (*s2 != '\0') 
    *ptr++ = *s2++;
*ptr = '\0';
return (ptr);
}