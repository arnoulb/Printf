/*
** my_strcpy.c for  in /home/arnould_b/rendu/Piscine_C_J06
** 
** Made by jean-michel arnould
** Login   <arnould_b@epitech.net>
** 
** Started on  Mon Oct  5 09:44:08 2015 jean-michel arnould
** Last update Tue Oct  6 14:51:14 2015 jean-michel arnould
*/

#include "inc.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
