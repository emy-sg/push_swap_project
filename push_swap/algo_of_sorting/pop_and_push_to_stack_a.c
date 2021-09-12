/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_and_push_to_stack_a.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:36:31 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:36:32 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb_of_stack_b(t_stack *s_stack_b, int j)
{
	t_token	*s_current_token;

	if (s_stack_b->nbr_of_chunks > 1)
	{
		s_current_token = s_stack_b->head_of_stack;
		while (j > 0)
		{
			rrb(s_stack_b);
			j--;
		}
	}
}

void	pop_and_push_to_stack_a(t_stack *s_stack_a,
			t_stack *s_stack_b, int count)
{
	t_token	*s_current_token;
	t_token	*s_next_token;
	int		pivot;
	int		j;
	int		i;

	pivot = get_pivot_of_chunk(s_stack_b);
	s_current_token = s_stack_b->head_of_stack;
	j = 0;
	i = 0;
	while (i < count)
	{
		s_next_token = s_current_token->next;
		if (s_current_token->integer <= pivot)
		{
			rb(s_stack_b);
			j++;
		}
		else
			pa(s_stack_a, s_stack_b);
		s_current_token = s_next_token;
		i++;
	}
	rrb_of_stack_b(s_stack_b, j);
}
