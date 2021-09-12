/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_chunk_in_stack_b_is_sorted.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:35:56 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:35:57 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_if_chunk_in_stack_b_is_sorted(t_stack *s_stack_b)
{
	t_token	*s_current_token;
	t_token	*s_next_token;
	int		current_integer;
	int		next_integer;
	int		i;

	s_current_token = s_stack_b->head_of_stack;
	s_next_token = s_current_token->next;
	i = 0;
	while (s_next_token && i < s_stack_b->s_chunk->nbr_of_tokens)
	{
		current_integer = s_current_token->integer;
		next_integer = s_next_token->integer;
		if (current_integer < next_integer)
			return (next_integer - current_integer);
		else
		{
			s_current_token = s_next_token;
			s_next_token = s_next_token->next;
		}
		i++;
	}
	return (0);
}
