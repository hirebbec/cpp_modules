CC			= c++ -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
NAME		= ./polymorphism
NAME_SHORT	= polymorphism

INCS_DIR	= ./includes/
MAIN_INC	= -I$(INCS_DIR)
INCS		= $(shell find $(INCS_DIR) -type f -name "*.hpp")

SRCS_DIR 	= ./sources/
SRCS		= $(shell find $(SRCS_DIR) -type f -name "*.cpp")

OBJS_DIR	= ./objects/
OBJS		= $(SRCS:$(SRCS_DIR)%.cpp=$(OBJS_DIR)%.o)


$(OBJS_DIR)%.o	: $(SRCS_DIR)%.cpp
			mkdir -p $(OBJS_DIR)
			$(CC) $(MAIN_INC) -c $< -o $@

all			: $(NAME)

$(NAME)		: $(OBJS) $(INCS)
			$(CC) $(OBJS) $(MAIN_INC) -o $(NAME)

clean		:
			$(RM) $(OBJS_DIR)

fclean		: clean
			$(RM) $(NAME)

re			: fclean all

test		:
			leaks -atExit -- ./$(NAME)

.PHONY		: all clean fclean re test