#include <stddef.h>
#ifndef LIBFT_H
# define LIBFT_H

typedef struct s_list
{
    void *content;
    struct s_list *next;
}

int ft_isalpha(int ft_c);
int ft_isdigit(int ft_c);
int ft_isalnum(int ft_c);
int ft_isascii(int ft_c);
int ft_isprint(int ft_c);
size_t ft_strlen(const char *s);
int ft_toupper(int ft_c);
int ft_tolower(int ft_c);
void *ft_memset(void *s, int ft_c, size_t ft_n);
void ft_bzero(void *s, size_t ft_n); // Note: bzero might not be available on all systems
void *ft_memcpy(void *dest, const void *src, size_t ft_n);
void *ft_memchr(const void *s, int ft_c, size_t ft_n);
int ft_memcmp(const void *s1, const void *s2, size_t ft_n);
char *ft_strnstr(const char *haystack, const char *needle, size_t ft_len);
int ft_atoi(const char *str);
void *ft_memmove(void *dest, const void *src, size_t ft_n);
size_t ft_strlcpy(char *dest, const char *src, size_t ft_size);
size_t ft_strlcat(char *dest, const char *src, size_t ft_size);
void *ft_calloc(size_t ft_nmemb, size_t ft_size);
char *ft_strchr(const char *s, int ft_c);
int ft_strncmp(const char *s1, const char *s2, size_t ft_n);
char *ft_strrchr(const char *s, int ft_c);
char *ft_strdup(const char *s);
char *ft_substr(const char *s, unsigned int ft_start, size_t ft_len);
char *ft_strjoin(const char *s1, const char *s2);
char *ft_strtrim(const char *s);
char **ft_split(const char *s, char c);
#endif