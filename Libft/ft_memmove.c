void *ft_memmove(void *dest, const void *src, unsigned long n){

unsigned long i;
char *char_dest;
const char *char_src;
char *char_temp;

char_dest = (char *)dest;
char_src = (const char *)src;
char_temp = (char *)malloc(n * sizeof(char)); // Memory assignation to the buffer

if (dest == '\0' || src == '\0')
    return ('\0');

//Overlap
if (char_dest > char_src && char_dest < char_src + n) {
    //src:  [A][B][C][D][E]
    //dest:      [X][Y][Z]
    i = n - 1;
    while (i >= 0){
        char_temp[i] = char_src[i];
        i--;
    }
}else {
    i = 0;
    while(n > i){
        char_temp[i] = char_src[i];
        i++;
    }
}

i = 0;
while(n > i){
    char_dest[i] = char_temp[i];
    i++;
}

// Free the temporary buffer
free(char_temp);

return (dest);
}