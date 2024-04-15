
TARGET  = $(BIN_DIR)/rush02
OBJ_DIR = ../obj
BIN_DIR = ../bin
SRC_DIR = .
CFLAGS  = -Wall -Wextra -Werror
OBJS    = $(OBJ_DIR)/dic.o \
		  $(OBJ_DIR)/solve.o \
		  $(OBJ_DIR)/wordcat.o \
		  $(OBJ_DIR)/dic_tool.o \
		  $(OBJ_DIR)/tools.o \
		  $(OBJ_DIR)/main.o

$(TARGET) : $(OBJS)
	mkdir -p $(BIN_DIR)
	cc $(CFLAGS) $(OBJS) -o $(TARGET)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c 
	mkdir -p $(OBJ_DIR)
	cc -c $(CFLAGS) $< -o $@

.PHONY : fclean
fclean:
	@rm -rf $(OBJ_DIR) $(BIN_DIR)
