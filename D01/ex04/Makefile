SHELL 	:= /bin/sh

NAME 	:= Brain

CC 		:= clang++

FLAGS 	:= -Wall -Wextra -Werror

.PHONY: remove re

all: ${NAME}

${NAME}:
	@${CC} -o ${NAME} *.cpp ${FLAGS}

remove:
	@rm ${NAME}

re: remove all
