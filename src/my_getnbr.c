/*
** my_getnbr.c for  in /home/arnould_b/rendu/Piscine_C_J04
** 
** Made by jean-michel arnould
** Login   <arnould_b@epitech.net>
** 
** Started on  Thu Oct  1 22:05:10 2015 jean-michel arnould
** Last update Wed Jan  4 14:14:38 2017 arnoul_b
*/

#include "inc.h"

int	is_it_neg(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] > '9' || str[i] < '0')
    {
      if (str[i] == '-')
	{
	  j++;
	}
      i++;
    }
  if (j % 2 != 0)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}

int	is_it_a_number(char c)
{
  if (c >= '0' && c <= '9')
    {
      return (1);
    }
  else
    {
      return (0);
    }
}

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;

  i = 0;
  nbr = 0;
  while (!is_it_a_number(str[i]))
    {
      i++;
    }
  while (is_it_a_number(str[i]))
    {
      nbr = ((nbr * 10) + (str[i] - '0'));
      i++;
    }
  if (is_it_neg(str))
    {
      nbr = - nbr;
    }
  return (nbr);
}
