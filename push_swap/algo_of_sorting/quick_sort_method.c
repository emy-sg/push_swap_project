/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort_method.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:36:37 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:36:38 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
	push_swap recursive fct :
		- STEP 1: push_swap_to_stack_b(s_stack_a, s_stack_b)
			while (check_if_stack_a_is_sorted(s_stack_a))
				-> Create a new chunk is stack b
		- STEP 2: 
			if (check_if_chunk_in_stack_b_is_sorted(s_stack_b))
				join_chunk_b_to_stack_a(s_stack_a, s_stack_b);
			else
			{
				Create new chunk in stack a;
				call push_swap fct again;
			}

 **/

void	quick_sort_method(t_stack *s_stack_a, t_stack *s_stack_b)
{
	while (check_if_stack_a_is_sorted(s_stack_a))
	{
		create_chunk_in_stack(s_stack_b, 0);
		pop_and_push_to_stack_b(s_stack_a, s_stack_b,
			s_stack_a->s_chunk->nbr_of_tokens);
	}
	while (s_stack_b->nbr_of_chunks > 0)
	{
		if (!check_if_stack_b_is_sorted(s_stack_a, s_stack_b))
			delete_chunk_from_stack(s_stack_b);
		else
		{
			create_chunk_in_stack(s_stack_a, 0);
			pop_and_push_to_stack_a(s_stack_a, s_stack_b,
				s_stack_b->s_chunk->nbr_of_tokens);
			quick_sort_method(s_stack_a, s_stack_b);
		}
	}
}
