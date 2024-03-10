char *ft_strchr(const char *s, char str){
    
    int i;
    
    i = 0;
    while (s[i] != '\0'){
        if (s[i] == str)
            return ((char *)&s[i]); // Return the address of the character in s
        i++;
    }
    return (0);
}