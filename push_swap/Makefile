NAME = push_swap

NAME_BONUS = checker

CC = gcc

MAKE = make -C

CFLAGS = -Wall -Wextra -Werror \

DEPS = push_swap.h

DEPS_BONUS = push_swap_bonus.h

SRCS = main.c \
       parser/parsing.c \
       parser/check_if_its_a_digit.c \
       parser/check_its_digit.c \
       parser/check_if_its_an_integer.c \
       parser/check_if_there_is_duplicate_value.c \
       parser/check_duplicates_value.c \
       linked_list/lst_tokens.c \
       linked_list/lst_chunks.c \
       algo_of_sorting/algo_of_sorting.c \
       algo_of_sorting/fill_tokens.c \
       algo_of_sorting/init_stack.c \
       algo_of_sorting/quick_sort_method.c\
       algo_of_sorting/check_if_chunk_in_stack_a_is_sorted.c \
       algo_of_sorting/check_if_chunk_in_stack_b_is_sorted.c \
       algo_of_sorting/check_if_stack_a_is_sorted.c \
       algo_of_sorting/check_if_stack_b_is_sorted.c \
       algo_of_sorting/create_chunk_in_stack.c \
       algo_of_sorting/pop_and_push_to_stack_a.c \
       algo_of_sorting/pop_and_push_to_stack_b.c \
       instructions/pa.c \
       instructions/push_top_elt_to_stack_a.c \
       instructions/pb.c \
       instructions/push_top_elt_to_stack_b.c \
       instructions/ra.c \
       instructions/rb.c \
       instructions/rr.c \
       instructions/rotate_stack.c \
       instructions/rra.c \
       instructions/rrb.c \
       instructions/rrr.c \
       instructions/reverse_rotation_of_stack.c \
       instructions/sa.c \
       instructions/sb.c \
       instructions/ss.c \
       instructions/swap_top_two_elt_of_stack.c \
       define_pivot/get_pivot_of_the_stack.c \
       define_pivot/get_min_integer_of_chunk.c \
       define_pivot/get_bigger_integer_then.c \
       sorting_two_or_three_tokens/sorting_stack_a_of_two_tokens.c \
       sorting_two_or_three_tokens/sorting_stack_a_of_three_tokens.c \
       sorting_two_or_three_tokens/sorting_stack_b_of_two_tokens.c \
       sorting_two_or_three_tokens/sorting_stack_b_of_three_tokens.c \

OBJS = $(SRCS=.c:.o)

SRCS_BONUS =  bonus_srcs/main.c \
              bonus_srcs/get_next_line_bonus.c \
              bonus_srcs/parser_bonus/parsing_bonus.c \
              bonus_srcs/parser_bonus/check_its_digit_bonus.c \
			  bonus_srcs/parser_bonus/check_if_its_a_digit_bonus.c \
              bonus_srcs/parser_bonus/check_if_there_is_duplicate_value_bonus.c \
              bonus_srcs/parser_bonus/check_if_its_an_integer_bonus.c \
              bonus_srcs/parser_bonus/check_duplicates_value_bonus.c \
              bonus_srcs/checker_part_bonus/checker_part.c \
              bonus_srcs/checker_part_bonus/init_checker.c \
              bonus_srcs/checker_part_bonus/fill_tokens_bonus.c \
              bonus_srcs/checker_part_bonus/init_stack_bonus.c \
              bonus_srcs/checker_part_bonus/check_if_stack_a_is_sorted_bonus.c \
              bonus_srcs/checker_part_bonus/applique_instruction_bonus.c \
              bonus_srcs/linked_list_bonus/lst_tokens_bonus.c \
              bonus_srcs/read_instructions_bonus/check_if_this_instruction_exist_or_not_bonus.c \
              bonus_srcs/read_instructions_bonus/lst_instructions_bonus.c \
              bonus_srcs/read_instructions_bonus/read_instructions_bonus.c \
              bonus_srcs/instructions_bonus/pa_bonus.c \
              bonus_srcs/instructions_bonus/pb_bonus.c \
              bonus_srcs/instructions_bonus/push_top_elt_to_stack_a_bonus.c \
              bonus_srcs/instructions_bonus/push_top_elt_to_stack_b_bonus.c \
              bonus_srcs/instructions_bonus/ra_bonus.c \
              bonus_srcs/instructions_bonus/rb_bonus.c \
              bonus_srcs/instructions_bonus/rr_bonus.c \
              bonus_srcs/instructions_bonus/rotate_stack_bonus.c \
              bonus_srcs/instructions_bonus/rra_bonus.c \
              bonus_srcs/instructions_bonus/rrb_bonus.c \
              bonus_srcs/instructions_bonus/rrr_bonus.c \
              bonus_srcs/instructions_bonus/reverse_rotation_of_stack_bonus.c \
              bonus_srcs/instructions_bonus/sa_bonus.c \
              bonus_srcs/instructions_bonus/sb_bonus.c \
              bonus_srcs/instructions_bonus/ss_bonus.c \
              bonus_srcs/instructions_bonus/swap_top_two_elt_of_stack_bonus.c \

OBJS_BONUS = $(SRCS_BONUS=.c:.o)

all: $(NAME)

$(NAME): $(DEPS) $(SRCS)
	@$(MAKE) libft
	@$(CC) $(CFLAGS) $(SRCS) libft/libft.a -o $(NAME)

bonus:
	@$(CC) $(CFLAGS) $(SRCS_BONUS) libft/libft.a -o $(NAME_BONUS)

clean:
	@$(MAKE) libft clean
	@rm -f $(OBJS)
	@rm -f $(OBJS_BONUS)

fclean: clean
	@$(MAKE) libft fclean
	@rm -f $(NAME)
	@rm -f $(NAME_BONUS)

re: fclean all
