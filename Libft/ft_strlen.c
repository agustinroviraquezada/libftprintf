int ft_strlen(const char *str){
    //Declare variables
    int i;
    
    // assign variables
    i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}