int ft_isprint(char *str){
    //To be part of ascii it must be between [32-126]
    if(*str >= 32 && *str <= 126 )
        return (1);
    return (0);
}
