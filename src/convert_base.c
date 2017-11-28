/*
** convert_base.c for  in /home/arnould_b/rendu/Piscine_C_bistromathique
** 
** Made by jean-michel arnould
** Login   <arnould_b@epitech.net>
** 
** Started on  Sat Oct 31 12:35:50 2015 jean-michel arnould
** Last update Mon Nov 16 10:37:25 2015 jean-michel arnould
*/

#include "inc.h"

void	hexa_maj(char *nb)
{
  int	i;

  i = 0;
  while (nb[i])
    {
      if (nb[i] == ':')
	nb[i] = 'A';
      if (nb[i] == ';')
	nb[i] = 'B';
      if (nb[i] == '<')
	nb[i] = 'C';
      if (nb[i] == '=')
	nb[i] = 'D';
      if (nb[i] == '>')
	nb[i] = 'E';
      if (nb[i] == '?')
	nb[i] = 'F';
      i++;
    }
}

void	hexa_min(char *nb)
{
  int	i;

  i = 0;
  while (nb[i])
    {
      if (nb[i] == ':')
	nb[i] = 'a';
      if (nb[i] == ';')
	nb[i] = 'b';
      if (nb[i] == '<')
	nb[i] = 'c';
      if (nb[i] == '=')
	nb[i] = 'd';
      if (nb[i] == '>')
	nb[i] = 'e';
      if (nb[i] == '?')
	nb[i] = 'f';
      i++;
    }
}

char	*conv_bn(long int nb, int base, int minmaj)
{
  int	i;
  long int 	res;
  char	*nbfin;

  i = 0;
  res = nb;
  while (res > 0)
    {
      res /= base;
      i++;
    }
  nbfin = malloc(sizeof (char) * (i + 1));
  i = 0;
  res = nb;
  while (res > 0)
    {
      nbfin[i++] = (res % base) + '0';
      res /= base;
    }
  nbfin[i] = '\0';
  my_revstr(nbfin);
  (minmaj == 1) ? hexa_min(nbfin) : hexa_maj(nbfin);
  return (nbfin);
}
