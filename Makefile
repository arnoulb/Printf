##
## Makefile for  in /home/arnould_b/rendu/Piscine_C_J10/lib/my
## 
## Made by jean-michel arnould
## Login   <arnould_b@epitech.net>
## 
## Started on  Fri Oct  9 15:58:16 2015 jean-michel arnould
## Last update Thu Nov 19 09:48:58 2015 jean-michel arnould
##

CC	:= 	gcc

RM	:= 	rm -f

NAME	:= 	libmyprintf.a

NAME2 	:= 	my_printf

INC_DIR	:=	include
SRC_DIR	:=	src
OBJ_DIR	:=	obj

SRC	:= 	convert_base.c\
		my_revstr.c\
		my_putchar.c\
		my_putstr.c\
		my_put_nbr.c\
		my_printf.c

SRC	:=	$(addprefix $(SRC_DIR)/, $(SRC))
OBJ	:=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

CFLAGS 	:=	-I$(INC_DIR)
#CFLAGS += -g

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
		$(CC) $(CFLAGS) -c -o $@ $<

all:		$(NAME) 

$(NAME): 	$(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		$(RM) $(OBJ)
		$(RM) $(SRC_DIR)/*~
		$(RM) $(SRC_DIR)/*\#

fclean: 	clean
		$(RM) $(NAME)

re: 		fclean all

