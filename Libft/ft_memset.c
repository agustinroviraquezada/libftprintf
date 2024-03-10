void *ft_memset(void  *str, int c, unsigned long n)
{
    //C pointers often returns values defined as long
    unsigned long i;
    unsigned char *pstr;

    i = 0;
    *pstr = str;

    while (n > i){
        pstr[i] = (unsigned char)c;
        i++;
    }
}