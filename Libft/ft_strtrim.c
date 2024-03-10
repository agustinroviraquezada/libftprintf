char *ft_strtrim(char const *s1, char const *set){
    if (!s1 || !set)
        return(0);
    char *ptr;
    int beg;
    int end;
    int i;

    while(s1[beg] && ft_strchr(set,s1[beg]))
        beg++;

    end  = 0;
    while (s1[beg + end])
        end++;

    while(end > 0 && ft_strchr(set,s1[beg+end-1]))
        end--; 

    ptr = (char *)malloc(( beg + end + 1)*sizeof(char));
    if (!ptr)
        return (0);
    i = 0;
    while (i < beg + end)
        ptr[i] = s1[beg + i];
        i++;
    ptr[beg + end] = '\0';
    return (ptr);
}