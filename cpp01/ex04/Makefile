
NAME = replace

CPP = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98

SRCS = main.cpp Replace.cpp

RM = rm -rf

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
		$(CPP) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

fclean : clean
		$(RM) $(NAME)

clean : 
		$(RM) $(OBJS) $(NAME)

re : fclean all
