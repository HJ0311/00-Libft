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

SRCS_MANDATORY := $(filter-out %_bonus.c, $(wildcard *.c))
OBJS_MANDATORY := $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRCS_MANDATORY))
DEPS_MANDATORY := $(patsubst %.c, $(DEP_DIR)/%.d, $(SRCS_MANDATORY))

SRCS_BONUS := $(filter %_bonus.c, $(wildcard *.c))
OBJS_BONUS := $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRCS_BONUS))
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
	@echo $(GREEN)"creating" $(NAME) "✓" $(RESET)

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
	@$(RM) $(OBJ_DIR) $(DEP_DIR)
	@for obj in $(OBJS_MANDATORY) $(OBJS_BONUS); do \
		sleep 0.1; \
	done
	@echo $(RED)"All object files of libft have been deleted. ✓" $(RESET);
	
	@for dep in $(DEPS_MANDATORY) $(DEPS_BONUS); do \
		sleep 0.1; \
	done
	@echo $(RED)"All dependency files of libft have been deleted. ✓" $(RESET);

fclean: clean
	@$(RM) $(NAME)
	@echo $(RED)$(NAME)" has been deleted. ✓" $(RESET)

re: fclean all
reB: fclean bonus

# ----------------------
# Include Dependencies
# ----------------------

-include $(DEPS_MANDATORY) $(DEPS_BONUS)

.PHONY: all clean fclean re reB
