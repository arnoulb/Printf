/*
** my_put_nbr.c for  in /home/arnould_b/rendu/J03
** 
** Made by jean-michel arnould
** Login   <arnould_b@epitech.net>
** 
** Started on  Wed Sep 30 22:35:34 2015 jean-michel arnould
** Last update Thu Oct 22 22:57:55 2015 jean-michel arnould
*/

#include "inc.h"

int	my_put_nbr(int nb)
{
  int	digit;

  digit = 0;
  if (nb < 0)
    {
      my_putchar(45);
      nb = -nb;
    }
  if (nb < 10)
  {
    my_putchar(nb + 48);
  }
  else if (nb > 9)
	{
	  my_put_nbr(nb / 10);
	  digit = nb % 10;
	  my_putchar(digit + 48);
	}
  return (0);
}
