int ft_isascii(char *str){
    //To be part of ascii it must be between [1-127]
    if(*str >= 0 && *str <= 127 )
        return (1);
    return (0);
}
