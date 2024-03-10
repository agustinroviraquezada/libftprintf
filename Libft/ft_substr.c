#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,unsigned  long len){

char *ptr;
unsigned int i;

i = 0;

if (s == 0)
    return (0);
while(s[i++] != '\0')
if (s <= start)
    return (0);
    

ptr = (char *)malloc(len+1*sizeof(char));
if (ptr == 0)
    return (0);

while(s[i] != '\0'){
    if (i >= start && i <= len)
        ptr[i-start] = s[i];
    i++;
}
ptr[len + 1] = '\0';

return (ptr);
}