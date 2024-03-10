char *ft_strnstr(const char *str, const char *substr, unsigned long n) {
    unsigned long  i;
    unsigned long  j;


    i = 0;
    if (*substr == '\0')  // If the substring is empty, return the whole string
        return (char *)str;

    while ( i < n && str[i++] != '\0') {
        j = 0;
        if (str[i] == substr[j]) {  // Posible macth
            while (substr[j] != '\0') {
                if (str[i + j] != substr[j] || i + j >= n)  // Mismatch or end of search space
                    break;
                j++;
            }
            if (substr[j] == '\0')  // If all characters of substr are matched
                return (char *)(str + i);  // Return a pointer to the beginning of the substring
        }
    }
    
    return ('\0');  // If no match is found within the specified length
}
