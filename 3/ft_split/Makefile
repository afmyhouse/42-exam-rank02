# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/21 22:45:25 by antoda-s          #+#    #+#              #
#    Updated: 2023/05/22 00:09:44 by antoda-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror -g
RM			= rm -f

BIN     	:= bin
SRC     	:= src
INCLUDE 	:= include
LIBRARIES	:= lib

SRCS    	:= $(wildcard $(SRC)/*.c)

OUTPUT  := ft_split

OBJS		= $(SRCS:.c=.o)

all: $(BIN)/$(OUTPUT)

$(BIN)/$(OUTPUT): $(OBJS)
	@echo Compiling...
	@$(CC) $(CFLAGS) $^ -o $@

#$(CC) $(CFLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

run: clean all
	clear
	@echo Clear screen...
	@echo Runing...
	@$(BIN)/$(OUTPUT) "$(INPUT)"

clean:
	@echo Cleaning...
	@$(RM) $(BIN)/$(OUTPUT)
	@$(RM) $(OBJS)

.PHONY: all clean run
