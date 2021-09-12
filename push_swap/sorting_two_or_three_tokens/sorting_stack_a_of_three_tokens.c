/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_stack_a_of_three_tokens.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:38:12 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:38:13 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	case_a_of_pivot_in_the_top(int *integer, t_stack *s_stack_a)
{
	if (s_stack_a->nbr_of_chunks == 1)
	{
		if (integer[1] > integer[2])
			rra(s_stack_a);
		else
			sa(s_stack_a);
	}
	else
	{
		if (integer[1] > integer[2])
		{
			ra(s_stack_a);
			sa(s_stack_a);
			rra(s_stack_a);
			sa(s_stack_a);
		}
		else
			sa(s_stack_a);
	}
}

void	case_a_of_pivot_in_the_middle(int *integer, t_stack *s_stack_a)
{
	if (s_stack_a->nbr_of_chunks == 1)
	{
		if (integer[0] > integer[2])
		{
			sa(s_stack_a);
			rra(s_stack_a);
		}
	}
	else
	{
		if (integer[0] > integer[2])
		{
			sa(s_stack_a);
			ra(s_stack_a);
			sa(s_stack_a);
			rra(s_stack_a);
			sa(s_stack_a);
		}
	}
}

void	case_a_of_pivot_in_the_end(int *integer, t_stack *s_stack_a)
{
	if (s_stack_a->nbr_of_chunks == 1)
	{
		if (integer[0] > integer[1])
			ra(s_stack_a);
		else
		{
			sa(s_stack_a);
			ra(s_stack_a);
		}
		return ;
	}
	if (integer[0] > integer[1])
	{
		sa(s_stack_a);
		ra(s_stack_a);
		sa(s_stack_a);
		rra(s_stack_a);
	}
	else
	{
		ra(s_stack_a);
		sa(s_stack_a);
		rra(s_stack_a);
	}
}

void	sorting_stack_a_of_three_tokens(t_stack *s_stack_a)
{
	t_token	*s_current_token;
	int		pivot;
	int		integer[3];
	int		i;

	pivot = get_pivot_of_chunk(s_stack_a);
	s_current_token = s_stack_a->head_of_stack;
	i = 0;
	while (i < s_stack_a->s_chunk->nbr_of_tokens)
	{
		integer[i] = s_current_token->integer;
		s_current_token = s_current_token->next;
		i++;
	}
	if (pivot == integer[0])
		case_a_of_pivot_in_the_top(integer, s_stack_a);
	if (pivot == integer[1])
		case_a_of_pivot_in_the_middle(integer, s_stack_a);
	if (pivot == integer[2])
		case_a_of_pivot_in_the_end(integer, s_stack_a);
}
