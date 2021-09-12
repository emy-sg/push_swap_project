/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_stack_a_is_sorted.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:36:01 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:36:02 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_if_stack_a_is_sorted(t_stack *s_stack_a)
{
	int	return_value;

	return_value = 1;
	if (s_stack_a->s_chunk->nbr_of_tokens == 1)
		return_value = 0;
	else if (s_stack_a->s_chunk->nbr_of_tokens == 2)
	{
		sorting_stack_a_of_two_tokens(s_stack_a);
		return_value = 0;
	}
	else if (s_stack_a->s_chunk->nbr_of_tokens == 3)
	{
		sorting_stack_a_of_three_tokens(s_stack_a);
		return_value = 0;
	}
	else if (!check_if_chunk_in_stack_a_is_sorted(s_stack_a))
		return_value = 0;
	if (return_value == 0)
	{
		if (s_stack_a->nbr_of_chunks > 1)
			delete_chunk_from_stack(s_stack_a);
		return (return_value);
	}
	return (return_value);
}
