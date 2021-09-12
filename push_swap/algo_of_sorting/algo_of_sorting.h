/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_of_sorting.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:35:37 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:35:38 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_OF_SORTING_H
# define ALGO_OF_SORTING_H

# include "../push_swap.h"

void	algo_of_sorting(int count_of_args, char **args);
t_token	*fill_tokens(int count, char **args);
void	init_stack(t_stack *s_stack);
int		check_if_chunk_in_stack_a_is_sorted(t_stack *s_stack_a);
int		check_if_chunk_in_stack_b_is_sorted(t_stack *s_stack_b);
int		check_if_stack_a_is_sorted(t_stack *s_stack_a);
int		check_if_stack_b_is_sorted(t_stack *s_stack_a, t_stack *s_stack_b);
void	create_chunk_in_stack(t_stack *s_stack, int count_of_tokens);
void	pop_and_push_to_stack_a(t_stack *s_stack_a,
			t_stack *s_stack_b, int count);
void	pop_and_push_to_stack_b(t_stack *s_stack_a,
			t_stack *s_stack_b, int count);
void	quick_sort_method(t_stack *s_stack_a, t_stack *s_stack_b);

#endif
