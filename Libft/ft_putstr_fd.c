#include <unistd.h>

void ft_putstr_fd(char *s, int fd){

if (s == NULL || fd < 0)
    return;

int i;

i = 0;
while(s[i]!='\0')
    ft_putchar_fd(s[i++],fd);
}