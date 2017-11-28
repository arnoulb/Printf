/*
** inc.h for  in /home/arnould_b/rendu/PSU_2015_my_printf/include
** 
** Made by jean-michel arnould
** Login   <arnould_b@epitech.net>
** 
** Started on  Mon Nov 16 14:07:53 2015 jean-michel arnould
** Last update Thu Nov 19 10:00:22 2015 jean-michel arnould
*/

#ifndef INC_H_
#define INC_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

void    base(char *, int, long int);
void    flags(char *, int *, long unsigned int);

/*
 * convert_base
 */
void hexa_maj(char *);
void hexa_min(char *);
char *conv_bn(long int, int, int);

/*
 * my_revstr
 */
char *my_revstr(char *str);

/*
 * my_getnbr
 */
int is_it_neg(char *);
int is_it_a_number(char);
int my_getnbr(char *);

/*
 * my_put_nbr
 */
int my_put_nbr(int nb);

/*
 * my_putstr
 */
void my_putstr(unsigned char *);
void my_putstr2(unsigned char*);
void my_putchar(unsigned char);

/*
 * my_printf
 */
void strings(char *, int , unsigned char*);
int checker(char *, int);
void flags(char *, int *, unsigned long int);
int my_printf(char *, ...);

/*
 * my_strcpy
 */
char *my_strcpy(char *, char *);

#endif
