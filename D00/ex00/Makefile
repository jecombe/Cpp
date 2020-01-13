# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/24 17:16:17 by jecombe      #+#   ##    ##    #+#        #
#    Updated: 2020/01/13 15:52:25 by jecombe     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re
vpath %.cpp src
NAME = megaphone

SRC			= megaphone.cpp
OBJDIR = ./obj/
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -g

O_FILES = $(SRC:%.cpp=$(OBJDIR)%.o)

all: $(NAME)

$(OBJDIR)%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

$(NAME): $(OBJDIR) $(O_FILES)
	$(CXX) -o $(NAME) $(O_FILES)

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


