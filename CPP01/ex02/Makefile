# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkulbak <mkulbak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 15:23:37 by mkulbak           #+#    #+#              #
#    Updated: 2025/11/20 16:19:12 by mkulbak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CXX = c++
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \


OBJS_DIR = obj
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))


# Make silent
MAKEFLAGS += --silent

all: $(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	@echo "✅ Compiling $(NAME).."
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "✅ $(NAME) Ready!"

$(OBJS_DIR)/%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	@echo "🧹 Cleaning objects..."
	rm -rf $(OBJS_DIR)
	@echo "✅ Objects cleaned!"

fclean: clean
	@echo "🧹 Removing executable..."
	rm -f $(NAME)
	@echo "✅ Full clean done!"

re: fclean all

.PHONY: all clean fclean re
