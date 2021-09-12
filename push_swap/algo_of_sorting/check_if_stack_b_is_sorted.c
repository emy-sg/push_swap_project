/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_stack_b_is_sorted.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:36:04 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:36:05 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_if_stack_b_is_sorted(t_stack *s_stack_a, t_stack *s_stack_b)
{
	if (s_stack_b->s_chunk->nbr_of_tokens == 1)
	{
		pa(s_stack_a, s_stack_b);
		return (0);
	}
	if (s_stack_b->s_chunk->nbr_of_tokens == 2)
	{
		sorting_stack_b_of_two_tokens(s_stack_a, s_stack_b);
		return (0);
	}
	else if (s_stack_b->s_chunk->nbr_of_tokens == 3)
	{
		sorting_stack_b_of_three_tokens(s_stack_a, s_stack_b);
		return (0);
	}
	else if (!check_if_chunk_in_stack_b_is_sorted(s_stack_b))
	{
		while (s_stack_b->s_chunk->nbr_of_tokens > 0)
			pa(s_stack_a, s_stack_b);
		return (0);
	}
	return (1);
}
