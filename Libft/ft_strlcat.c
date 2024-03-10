unsigned long ft_strlcat(char *dst, const char *src, unsigned long size){

//Appends the contents of the source string (src) to the destination string (dest).
unsigned long i;
unsigned long j;

i = 0; 
j = 0;

while (dst[j] != '\0')
    j++;

while (src[i] != '\0' && i + j < size-1){
        dst[j] = src[i];
        i++;
        j++;
}

dst[j] = '\0';

j = 0;
while (dst[j] != '\0')
    j++;


return (j);
//Ensures that the total length of the concatenated string does not exceed the size of the destination buffer minus one
//In case of overflow truncates the source string to fit within the remaining space in the destination buffe
}