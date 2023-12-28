NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
LIBFTNAME = libft.a
LIBFTDIR = ./libft
CC = gcc
CLEAN = rm -Rf
SRC = ft_printf.c ft_conversion.c ft_check_c.c ft_check_d_i.c ft_check_s.c ft_check_x.c ft_check_u.c ft_check_p.c ft_format.c 

OBJS = $(SRC:.c=.o)

all: $(NAME)

makelibft:
	@make bonus -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) ./$(NAME)

$(NAME): makelibft $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean

fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean
re: fclean all
.PHONY: all clean fclean re bonus