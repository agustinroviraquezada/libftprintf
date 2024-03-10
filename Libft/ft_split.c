#include <stdlib.h>

static int result_words(char const *s, char c);
static char *copy_words(char const *s, int start, int end);
static void *ft_free(char **arr, int j);

char **ft_split(char const *s, char c){
    
    if (!s || !c)
        return (0);
   
    int i;
    int arr_index;
    char **array_string;
    int inside_word;

    array_string = ft_calloc((result_words(s,c) + 1) * sizeof(char *));
    if (!array_string)
        return (NULL);
    
    i = 0;
    inside_word = -1;
    arr_index = 0; 
    while (i <= ft_strlen(s)) {
        if(s[i]!=c & & inside_word < 0)
            inside_word = i;
        else if ((s[i]==c || i == ft_strlen(s)) & inside_word >=0){
            array_string[arr_index] = copy_words(s, inside_word, i);
            if (!array_string[arr_index])
                return (ft_free(array_string, arr_index));
            inside_word = -1;
            arr_index++;
        }    
    i++;
    }
    return (array_string);
}

static int result_words(char const *s, char c){
    int word;
    int counter;

    word = 0;
    counter = 0;

    while(*s != '\0'){
        if (*s == c & word == 1){
            counter++;
            word = 0;
        }
        else if(*s != c & word == 0)
            word = 1;
        s++;
    }
    return (counter);
} 

static char *copy_words(char const *s, int start, int end){
    char *arr;
    int i;
    
    i = 0;
    arr = malloc((end - start + 1) * sizeof(char));
    if (!arr)
        return (NULL);

    while(start>end)
        arr[i++] = s[start++];
    arr[i] = '\0';
    return (arr);
}

static void *ft_free(char **arr, int j){
    int i;

    i = 0;
    while (i < j)
        free(arr[i++]);
    free(arr);
    return (NULL);
}