# ----------------------
# Project Configuration
# ----------------------

NAME := libft.a

# Compiler Settings
CC := cc
CFLAGS := -Wall -Wextra -Werror -MMD
AR := ar rcs
RM := rm -rf

# Directories
OBJ_DIR := obj
DEP_DIR := dep

#Header
HEADER = libft.h

# ----------------------
# Sources and Objects
# ----------------------

SRCS := $(wildcard *.c)
SRCS_MANDATORY := $(filter-out %_bonus.c, $(SRCS))
SRCS_BONUS := $(filter %_bonus.c, $(SRCS))

OBJS_MANDATORY := $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRCS_MANDATORY))
OBJS_BONUS := $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRCS_BONUS))

DEPS_MANDATORY := $(patsubst %.c, $(DEP_DIR)/%.d, $(SRCS_MANDATORY))
DEPS_BONUS := $(patsubst %.c, $(DEP_DIR)/%.d, $(SRCS_BONUS))

# Color for output
RESET := "\033[0m"
YELLOW := "\033[33m"
GREEN := "\033[32m"
RED := "\033[31m"

# ----------------------
# Create Targets
# ----------------------

all: $(OBJS_MANDATORY)
	@$(AR) $(NAME) $(OBJS_MANDATORY)
	@echo $(GREEN)"creating" $(NAME) "✓" $(RESET)

bonus: $(OBJS_BONUS)
	@$(AR) $(NAME) $(OBJS_BONUS)
	@echo $(GREEN)"creating bonus" $(NAME) "✓" $(RESET)

$(OBJ_DIR)/%.o: %.c $(HEADER) | $(OBJ_DIR) $(DEP_DIR)
	@$(CC) $(CFLAGS) -c -MMD $< -o $@
	@mkdir -p $(DEP_DIR)
	@mv $(OBJ_DIR)/$*.d $(DEP_DIR)/$*.d


$(OBJ_DIR) $(DEP_DIR):
	@mkdir -p $@

# ----------------------
# Clean Targets
# ----------------------

clean:
	@if [ -d $(OBJ_DIR) ]; then \
		$(RM) $(OBJ_DIR); \
		echo $(RED)"All object files of libft have been deleted. ✓" $(RESET); \
	fi
	@if [ -d $(DEP_DIR) ]; then \
		$(RM) $(DEP_DIR); \
		echo $(RED)"All dependency files of libft have been deleted. ✓" $(RESET); \
	fi


fclean: clean
	@if [ -f $(NAME) ]; then \
		$(RM) $(NAME); \
		echo $(RED)$(NAME)" has been deleted. ✓" $(RESET); \
	fi

re: fclean all
reB: fclean bonus

# ----------------------
# Include Dependencies
# ----------------------

-include $(DEPS_MANDATORY) $(DEPS_BONUS)

.PHONY: all clean fclean re reB
