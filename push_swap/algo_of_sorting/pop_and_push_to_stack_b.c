/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_and_push_to_stack_b.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:36:34 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:36:35 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra_of_stack_a(t_stack *s_stack_a, int j)
{
	t_token	*s_current_token;

	if (s_stack_a->nbr_of_chunks > 1)
	{
		s_current_token = s_stack_a->head_of_stack;
		while (j > 0)
		{
			rra(s_stack_a);
			j--;
		}
	}
}

void	pop_and_push_to_stack_b(t_stack *s_stack_a,
			t_stack *s_stack_b, int count)
{
	t_token	*s_current_token;
	t_token	*s_next_token;
	int		pivot;
	int		j;
	int		i;

	pivot = get_pivot_of_chunk(s_stack_a);
	s_current_token = s_stack_a->head_of_stack;
	j = 0;
	i = 0;
	while (i < count)
	{
		s_next_token = s_current_token->next;
		if (s_current_token->integer > pivot)
		{
			ra(s_stack_a);
			j++;
		}
		else
			pb(s_stack_a, s_stack_b);
		s_current_token = s_next_token;
		i++;
	}
	rra_of_stack_a(s_stack_a, j);
}
