#include <stdlib.h>

static int count_digit(int n);

char *ft_itoa(int n){

    char *str;
    int i;
    int digits;

    digits = count_digit(n);
    str = malloc((digits + 1 )*sizeof(char));
    if (!str)
        return (NULL);
    

    i = 0;
    if (n<0){
        n  = -n;
        str[i++] = "-";
    }

    if (n>0){
        n =  n / 10;
        str[i] = ft_itoa(n) - '0';
        i++;
    }
    str[i] = '\0';
    return (str);
}

static int count_digit(int n){
    int c;

    c = 0;
    if (n>0){
        n = n * (-1);
        c++;
    }
    while (n>0){
        n = n / 10;
        c++;
    }
    return (c);
}

