/*
** my_printf.c for  in /home/arnould_b/rendu/PSU_2015_my_printf/lib/my
** 
** Made by jean-michel arnould
** Login   <arnould_b@epitech.net>
** 
** Started on  Sat Nov  7 16:17:40 2015 jean-michel arnould
** Last update Thu Nov 19 10:14:01 2015 jean-michel arnould
*/

#include "inc.h"

void	base(char *str, int i, long int arg)
{
  char *nb;

  if (str[i] == 'x' || str[i] == 'p' || str[i] == 'X' || str[i] == 'x'
      || str[i] == 'b' || str[i] == 'o')
    {
      if (str[i] == 'x' || str[i] == 'p')
	my_putstr(nb = conv_bn(arg, 16, 1));
      if (str[i] == 'X')
	my_putstr(nb = conv_bn(arg, 16, 0));
      if (str[i] == 'b')
	my_putstr(nb = conv_bn(arg, 2, 0));
      if (str[i] == 'o')
	my_putstr(nb = conv_bn(arg, 8, 0));
      free(nb);
    }
  if (str[i] == 'd' || str[i] == 'i')
    my_put_nbr(arg);
  if (str[i] == 'c')
    my_putchar(arg);
}

void	strings(char *str, int i, unsigned char *arg)
{
  if (str[i] == 's')
    my_putstr(arg);
  if (str[i] == 'S')
    my_putstr2(arg);
  else
    return;
}

int	checker(char *str, int i)
{
  if (str[i] == 'X' || str[i] == 'x' || str[i] == 'b' || str[i] == 'o'
      || str[i] == 'd' || str[i] == 'i' || str[i] == 'c')
    return (1);
  if (str[i] == 'd' || str[i] == 'i' || str[i] == 's' || str[i] == 'S')
    return (2);
  if (str[i] == '#' || str[i] == '0' || str[i] == 'p')
    return (3);
  if (str[i] == '%')
    return (4);
  else
    return (0);
}

void	flags(char *str, int *i, unsigned long int arg)
{
  if (str[*i] == '#' || str[*i] == 'p')
    {
      while (str[*i] == '#')
	*i += 1;
      if (str[*i] == 'X' || str[*i] == 'x' || str[*i] == 'p')
	str[*i] == 'X' ? my_putstr("0X") : my_putstr("0x");
      if (str[*i] == 'o')
	my_putchar('0');
      base(str, *i, arg);
    }
}

int	my_printf(char *str, ...)
{
  int	i;
  va_list	ap;

  i = 0;
  va_start(ap, str);
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  if (checker(str, ++i) == 1)
	    base(str, i, va_arg(ap, long int));
	  if (checker(str, i) == 2)
	    strings(str, i, va_arg(ap, unsigned char *));
	  if (checker(str, i) == 3)
	    flags(str, &i, va_arg(ap, unsigned long int));
	  if (checker(str, i++) == 4)
	    my_putchar('%');
	}
      if (!str[i])
	return (0);
      my_putchar(str[i++]);
    }
  va_end(ap);
  return (0);
}
