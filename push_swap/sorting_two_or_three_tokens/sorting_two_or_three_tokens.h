/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_two_or_three_tokens.h                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:38:24 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:38:25 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_TWO_OR_THREE_TOKENS_H
# define SORTING_TWO_OR_THREE_TOKENS_H

# include "../push_swap.h"

void	sorting_stack_a_of_two_tokens(t_stack *s_stack_a);
void	sorting_stack_b_of_two_tokens(t_stack *s_stack_a, t_stack *s_stack_b);
void	sorting_stack_a_of_three_tokens(t_stack *s_stack_a);
void	sorting_stack_b_of_three_tokens(t_stack *s_stack_a, t_stack *s_stack_b);
void	case_a_of_pivot_in_the_top(int *integer, t_stack *s_stack_a);
void	case_a_of_pivot_in_the_middle(int *integer, t_stack *s_stack_a);
void	case_a_of_pivot_in_the_end(int *integer, t_stack *s_stack_a);
void	case_b_of_pivot_in_the_top(int *integer,
			t_stack *s_stack_a, t_stack *s_stack_b);
void	case_b_of_pivot_in_the_middle(int *integer,
			t_stack *s_stack_a, t_stack *s_stack_b);
void	case_b_of_pivot_in_the_end(int *integer,
			t_stack *s_stack_a, t_stack *s_stack_b);

#endif
