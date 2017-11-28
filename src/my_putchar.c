/*
** my_putchar.c for  in /home/arnould_b/rendu/library
** 
** Made by jean-michel arnould
** Login   <arnould_b@epitech.net>
** 
** Started on  Tue Oct  6 16:22:11 2015 jean-michel arnould
** Last update Mon Nov  9 14:37:07 2015 jean-michel arnould
*/

#include "inc.h"

void	my_putchar(unsigned char c)
{
  write(1, &c, 1);
}
