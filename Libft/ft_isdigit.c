int ft_isdigit(char *str){
    // Check if it is insede the right chars
    if (*str >= '0' && *str <= '9')
        return (1);
    return (0);
}