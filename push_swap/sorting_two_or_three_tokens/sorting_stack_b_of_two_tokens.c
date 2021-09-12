/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_stack_b_of_two_tokens.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:38:21 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:38:22 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
 	bigger
	   |
	   |
	smaller
 */

void	sorting_stack_b_of_two_tokens(t_stack *s_stack_a, t_stack *s_stack_b)
{
	t_token	*s_current_token;
	int		integer[2];
	int		i;

	s_current_token = s_stack_b->head_of_stack;
	i = 0;
	while (i < s_stack_b->s_chunk->nbr_of_tokens)
	{
		integer[i] = s_current_token->integer;
		s_current_token = s_current_token->next;
		i++;
	}
	if (integer[0] < integer[1])
		sb(s_stack_b);
	pa(s_stack_a, s_stack_b);
	pa(s_stack_a, s_stack_b);
}
