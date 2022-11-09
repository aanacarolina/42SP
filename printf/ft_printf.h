TODO - HEADER


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_hex_upper(unsigned long decimal, int i, int j);
int	ft_hex_lower(unsigned long decimal, int i, int j);
int	ft_pointer(unsigned long ptr);
int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putnbr_unsign(unsigned int n);
int	ft_putstr(char *s);
int	ft_specifier(char format, va_list arg);

#endif