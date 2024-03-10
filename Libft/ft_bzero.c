void ft_bzero(void *str, unsigned long n){
    //void* pointer because it doesn't have a size associated with it.
    //C pointers often returns values defined as long
    unsigned long i;
    unsigned char *ptr;

    i = 0;
    *ptr = str;

    if (!str)
		return ('\0');

    while (n > i){
        ptr[i] = '\0';
        i++;
    }
}     

