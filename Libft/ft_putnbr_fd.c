void ft_putnbr_fd(int n, int fd){
    
    char *n_str;
    
    n_str = ft_itoa(n);
     if (n_str == NULL)
        return;
    ft_putchar_fd(n_str,fd);
}