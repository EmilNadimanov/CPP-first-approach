SHELL 	:= /bin/sh

NAME 	:= phonebook

CC 		:= clang++

FLAGS 	:= -Wall -Wextra -Werror

.PHONY: remove re

all: ${NAME}

${NAME}:
	@${CC} -o ${NAME} ${NAME}.cpp ${FLAGS}

remove:
	@rm ${NAME}

re: remove all
