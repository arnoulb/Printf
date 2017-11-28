/*
** my_revstr.c for  in /home/arnould_b/rendu/J06/Piscine_C_J06/ex_04
** 
** Made by jean-michel arnould
** Login   <arnould_b@epitech.net>
** 
** Started on  Mon Oct  5 16:18:13 2015 jean-michel arnould
** Last update Fri Nov 13 14:55:04 2015 jean-michel arnould
*/

#include "inc.h"

char	*my_revstr(char *str)
{
  char	c;
  int	i;
  int	length;

  length = 0;
  while (str[length])
    {
      length++;
    }
  length--;
  i = 0;
  while (i < length)
    {
      c = str[i];
      str[i] = str[length];
      str[length] = c;
      i++;
      length--;
    }
  return (str);
}
