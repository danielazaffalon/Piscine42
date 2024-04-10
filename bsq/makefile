TARGET  = bsq
CFLAGS  = -Wall -Wextra -Werror
OBJ_DIR = ./obj
SRC_DIR = ./src
DEPS	= $(SRC_DIR)/map.h \
			$(SRC_DIR)/iteration.h \
			$(SRC_DIR)/print.h
OBJS    = $(OBJ_DIR)/main.o \
		  $(OBJ_DIR)/map.o \
		  $(OBJ_DIR)/iteration.o \
		  $(OBJ_DIR)/print.o

$(TARGET) : $(OBJS)
	cc $(CFLAGS) $(OBJS) -o $(TARGET)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(DEPS)
	mkdir -p $(OBJ_DIR)
	cc -c $(CFLAGS) $< -o $@

.PHONY : fclean
fclean:
	@rm -rf $(OBJ_DIR) bsq