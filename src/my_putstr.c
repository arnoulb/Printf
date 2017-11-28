/*
** my_putstr.c for  in /home/arnould_b/rendu/Piscine_C_J04
** 
** Made by jean-michel arnould
** Login   <arnould_b@epitech.net>
** 
** Started on  Thu Oct  1 12:40:32 2015 jean-michel arnould
** Last update Mon Nov 16 22:35:44 2015 jean-michel arnould
*/

#include "inc.h"

void	my_putstr(unsigned char *str)
{
  int	i;

  i = 0;
  if (!str)
    {
      my_putstr("(null)");
      return ;
    }
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

void	my_putstr2(unsigned char *str)
{
  int	i;
  char	*nb;

  i = 0;
  while (str[i])
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	  my_putchar('\\');
	  my_putstr(nb = conv_bn(str[i], 8, 0));
	  free(nb);
	  i++;
	}
      my_putchar(str[i++]);
    }
}
