char ft_toupper(char *str){

    if (*str >= 'a' && *str <= 'z')
        *str = *str - 32;
    return (*str);
}