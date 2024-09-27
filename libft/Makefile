# LIBC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c\
# 	   ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
# 	   ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
# 	   ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

# ADD = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c\
# 	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c

# BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
# 		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
# 		ft_lstmap_bonus.c

# CC = gcc

# CFLAGS = -Wall -Werror -Wextra -I ./

# SRC = ${LIBC} ${ADD}
# SRCALL = ${LIBC} ${ADD} ${BONUS}

# OBJECT = ${SRC:.c = .o}
# OBJECTALL = ${SRCALL:.c = .o}
# LIB = libft.a

# .c.o : ${CC} ${CFLAGS} -c $< -o ${<: .c = .o}

# ${LIB} : ${OBJECT}
# 			ar -rsc ${LIB} ${OBJECT}

# bonus : ${OBJECTALL}
# 			ar -rsc ${LIB} ${OBJECTALL}

# all : ${LIB}

# clean : rm -f ${OBJECTALL}

# fclean : clean
# 			rm -f ${LIB}

# re : fclean all

# .PHONY : all clean fclean re bonus


# Source files for the library
LIBC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c\
	   ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	   ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
	   ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

ADD = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c\
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
		ft_lstmap_bonus.c

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I ./

# Source and object files
SRC = ${LIBC} ${ADD}
SRCALL = ${SRC} ${BONUS}
OBJECT = ${SRC:.c=.o}
OBJECTALL = ${SRCALL:.c=.o}
LIB = libft.a

# Rule to compile .c files to .o
%.o: %.c
	@echo "--=> Compile .c file to .o"
	${CC} ${CFLAGS} -c $< -o $@

# Rule to create the static library
${LIB}: ${OBJECT}
	@echo "--=> Create the static library by LIBC and ADD"
	ar -rsc ${LIB} ${OBJECT}

# Rule to create the bonus library
bonus: ${OBJECTALL}
	@echo "--=> Create the static library by LIBC, ADD and BONUS"
	ar -rsc ${LIB} ${OBJECTALL}

# Rule to build everything
all: ${LIB}

# Cleaning rules
clean:
	@echo "--=> Cleaning the object filles .o"
	rm -f ${OBJECT} ${OBJECTALL}

fclean: clean
	@echo "--=> Cleaning library"
	rm -f ${LIB}

re: fclean all

.PHONY: all clean fclean re bonus
