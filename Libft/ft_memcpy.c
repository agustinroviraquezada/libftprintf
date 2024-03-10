void *ft_memcpy(void *dest, const  void *src,unsigned long n){
//. It simply copies data from the source to the destination without considering the possibility of overlap
unsigned long i;
char *char_dest; // Create a second pointer and modified from there
const char *char_src;

char_dest = (char *)dest;
char_src = (const char *)src;
i = 0;

if (dest == '\0' || src == '\0') {
        return ('\0');
    }

while(n > i){
    char_dest[i] = char_src[i];
    i++;
}

return (dest);
}