SHELL 	:= /bin/sh

NAME 	:= ft_retro

CC 		:= clang++

FLAGS 	:= -Wall -Wextra -Werror -lncurses

.PHONY: remove re

all: ${NAME}

${NAME}:
	@${CC} -o ${NAME} *.cpp ${FLAGS}

remove:
	@rm ${NAME}

re: remove all