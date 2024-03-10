char *ft_strrchr(const char *s, char str) {
    int l;
    
    l = 0;
    while (s[l] != '\0')
        l++;

    while ((l-1) >= 0) {
        if (s[l] == str)
            return ((char *)&s[l]); // Return the address of the character
        l--; 
    }
    return (0);
}
