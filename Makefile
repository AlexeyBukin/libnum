NAME = libnum.a

CC = gcc
DEBUG = -g
OPTIM = -O2

CFLAGS = -Wall -Wextra -Werror $(DEBUG) $(OPTIM)

INCLUDE = -I include/

BUILD_DIR = build/
SRC_DIR = src/

# ./update_srcs.sh will update this list
# find src -type f -name '*.c' | sed 'N;N;s/\n/ /g' | sed "s/\$/ \\\\/" | column -t

SRC_FILES = \
src/convert/vec2to3.c   src/convert/vec3to2.c   src/mat3x3/mat3x3__1.c  \
src/mat3x3/mat3x3__2.c  src/mat3x3/mat3x3__3.c  src/num/num__1.c        \
src/num/num__2.c        src/qtn/qtn__1.c        src/qtn/qtn__2.c        \
src/vec2/vec2__1.c      src/vec2/vec2__2.c      src/vec2/vec2__3.c      \
src/vec2/vec2__4.c      src/vec2/vec2__5.c      src/vec2/vec2__6.c      \
src/vec2/vec2__7.c      src/vec3/vec3__1.c      src/vec3/vec3__2.c      \
src/vec3/vec3__3.c      src/vec3/vec3__4.c      src/vec3/vec3__5.c

O_FILES = $(patsubst $(SRC_DIR)%.c, $(BUILD_DIR)%.o, $(SRC_FILES))

SRC_DIRS = $(shell find $(SRC_DIR) -type d)
BUILD_DIRS_REC = $(patsubst $(SRC_DIR)%, $(BUILD_DIR)%, $(SRC_DIRS))

HEADER_FILES = \
include/libnum.h			include/libnum_types.h \
include/libnum_vec2.h		include/libnum_vec3.h \
include/libnum_mat3x3.h

.PHONY: clean fclean all

all: $(NAME)

$(NAME): $(BUILD_DIRS_REC) $(O_FILES)
	@ranlib $(NAME)
	@echo "make: Done compilation of \`$(NAME)'."

$(BUILD_DIRS_REC):
	@mkdir -vp $(BUILD_DIRS_REC)

$(BUILD_DIR)%.o: $(SRC_DIR)%.c $(HEADER_FILES)
	$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<
	@ar rcs $(NAME) $@

clean:
	@rm -rf $(BUILD_DIR)
	@echo "make: Done clean of \`$(NAME)'."

fclean: clean
	@rm -f $(NAME)
	@echo "make: Done full clean of \`$(NAME)'."

re: fclean all
	@echo "make: Done recompile of \`$(NAME)'."
