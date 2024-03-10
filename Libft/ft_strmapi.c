#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){

    if (!*s)
        return (NULL);
    
    unsigned int i;
    char *ptr;
    int s_len;

    i = 0;
    s_len = ft_strlen(s);
    ptr = malloc((s_len+1)*sizeof(char));
    if (!s)
        return (NULL);

    while(s[i] != '\0'){
        ptr[i] = (*f)(i,s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);

}