int ft_isalpha(char *str){
    //Check if it is inside the ASCCI interval
    if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
        return (1);
    //Otherwise return 0
    return (0);
    }