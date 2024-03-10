#include <stdarg.h>

int ft_printf(char const *s_chain, ...){

// args to format
va_list   args;

//Initialize var_list, then I can access to each args
va_start(args, s_chain);

switch (str_print) {
   
  case '%s':
    //%s Prints a string (as defined by default in C).
    va_arg( args,  char * );
    
  case '%p':
    //%p The void pointer * given as argument is printed in hexadecimal format.
    va_arg( args,  int );

  case '%d':
    //%d Prints a decimal number (base 10).
    va_arg( args,  int );

  case '%i':
  //%i Prints an integer in base 10.
    va_arg( args,  int );

  case '%u':
    //%u Prints an unsigned decimal (base 10) number.
    va_arg( args,  int );

  case '%x':
    //%x Prints a hexadecimal number (base 16) in lowercase.
    va_arg( args,  int );

  case '%X':
    //%X Prints a hexadecimal number (base 16) in uppercase.
    va_arg( args,  int );

  case '%% %':
    //%% % to print the percentage symbol.
    va_arg( args,  char * );
  default:
    //%c Prints a single character.
    va_arg( args,  char * ); 
}


}