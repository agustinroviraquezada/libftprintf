int ft_isalnum(char *str){

    // check if it is alphabet
    if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
        return (1);
    if (*str >= '0' && *str <= '9') // check if it is a number
        return(1);
    return (0);
}