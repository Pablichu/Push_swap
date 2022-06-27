NAME		=	push_swap
BONUS_NAME	=	checker

CC			=	gcc
CFLAGS		=	-I. -Wall -Wextra #-Werror
RM			=	@rm -f

HEADER		=	h_push_swap.h
HEADER_B	=	h_push_swap_bonus.h

DAY			=	$(shell date +'%d/%m/%Y %H:%M')
ARG			:=	$(shell seq -100 2500 | sort -R | tail -n 500)

SRCS		=	srcs/push_swap.c \
				srcs/operators/push.c \
				srcs/operators/swap.c \
				srcs/operators/rotate.c \
				srcs/operators/reverse.c \
				srcs/init_stack/no_rep.c \
				srcs/init_stack/getting_num.c \
				srcs/init_stack/atoi_modified.c \
				srcs/sorter/sorter.c \
				srcs/sorter/sorter_low.c \
				srcs/sorter/sorter_medium.c \
				srcs/sorter/sorter_chunks.c \
				srcs/sorter/chunks_algorithm/sorter_chunks_push.c \
				srcs/sorter/chunks_algorithm/sorter_chunks_push_aux.c \
				srcs/sorter/chunks_algorithm/sorter_chunks_back.c \
				srcs/sorter/chunks_algorithm/sorter_chunks_patcher.c \
				srcs/error.c

BNS_SRC		=	srcs/bonus/checker.c \
				srcs/operators/push.c \
				srcs/operators/swap.c \
				srcs/operators/rotate.c \
				srcs/operators/reverse.c \
				srcs/init_stack/no_rep.c \
				srcs/init_stack/getting_num.c \
				srcs/init_stack/atoi_modified.c \
				srcs/error.c

OBJS		=	${SRCS:.c=.o}
BONUS		=	${BNS_SRC:.c=.o}

$(NAME):		$(HEADER) $(OBJS)
				@echo "\033[0;36mCompiling..\033[1;34m"
				make -C libft
				@echo "\033[0;35mCompiling stuff.."
				${CC} ${OBJS} -I. -o $(NAME) -L. libft/libft.a
				@echo "\033[1;32mDONE MANIN\033[0m"

$(BONUS_NAME):	$(HEADER_B) $(BONUS)
				@echo "\033[0;36mMaking that bonus..\033[1;34m"
				make -C libft
				${CC} ${BONUS} -I. -o $(BONUS_NAME) -L. libft/libft.a


all:			${NAME}

bonus:			$(BONUS_NAME)

clean:
				@${RM} ${OBJS} ${BONUS}

fclean:			clean
				@${RM} ${NAME} ${BONUS_NAME}
				@make -C libft fclean

re:
				@make fclean
				@make -C libft fclean
				@make all

git:
				git add .
				git commit -m "$(DAY)"
				git push -u origin master

exe:            
				./push_swap $(ARG)

count:            
				./push_swap $(ARG) | wc -l
test:            
				./push_swap $(ARG) | ./checker_Mac $(ARG)

.PHONY:			all clean fclean re bonus git
