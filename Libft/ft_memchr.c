void *ft_memchr(const void *str, int c, unsigned long n){
    
    unsigned long i;
    const unsigned char *ptr;
    
    ptr = str;
    i = 0;
    
    while (i < n){
        if(ptr[i] == (unsigned char)c)
            return (void *)(ptr + i);
        i++;
    }
    return ('\0');
}


