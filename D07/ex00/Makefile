# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/24 17:16:17 by jecombe      #+#   ##    ##    #+#        #
#    Updated: 2020/01/22 12:51:46 by jecombe     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re
vpath %.cpp src
NAME = Scalar

SRC			= main.cpp

OBJDIR = ./obj/
INCDIR = ./include/


INCLUDE = -I $(INCDIR)
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror

O_FILES = $(SRC:%.cpp=$(OBJDIR)%.o)

all: $(NAME)

$(OBJDIR)%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $< $(INCLUDE)

$(NAME): $(OBJDIR) $(O_FILES)
	$(CXX) -std=c++98 -o $(NAME) $(O_FILES) $(INCLUDE)

$(OBJDIR):
	@mkdir $@
	@printf "\033[1;35mSTART COMPILE $(NAME_PRINT)\033[0m\n"

clean:
	rm -rf $(OBJDIR)
fclean: clean
	rm -f $(NAME)
re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory


