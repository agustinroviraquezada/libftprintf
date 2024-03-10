#include <stdlib.h>

char *ft_strdup(const char *s){

char *pts;
int i;

i = 0;

while (s[i]!= '\0')
    i++;
    
pts = (char *)malloc((i+1)*sizeof(char));

i = 0;
while (s[i]!= '\0'){
    pts[i] = s[i];
    i++;
} 

pts[i] = '\0';
return(pts);  

}