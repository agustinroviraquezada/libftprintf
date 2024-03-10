char ft_tolower(char *str)
{
    if (*str >= 'A' && *str<= 'Z')
        *str = *str + 32;
    return (str);
}
