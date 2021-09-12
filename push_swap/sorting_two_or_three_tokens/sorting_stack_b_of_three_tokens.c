/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_stack_b_of_three_tokens.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:38:18 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:38:19 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	case_b_of_pivot_in_the_top(int *integer,
			t_stack *s_stack_a, t_stack *s_stack_b)
{
	if (integer[2] > integer[1])
	{
		if (s_stack_b->nbr_of_chunks == 1)
			rrb(s_stack_b);
		else
		{
			rb(s_stack_b);
			sb(s_stack_b);
			pa(s_stack_a, s_stack_b);
			rrb(s_stack_b);
			pa(s_stack_a, s_stack_b);
			pa(s_stack_a, s_stack_b);
			return ;
		}
	}
	else
		sb(s_stack_b);
	pa(s_stack_a, s_stack_b);
	pa(s_stack_a, s_stack_b);
	pa(s_stack_a, s_stack_b);
}

void	case_b_of_pivot_in_the_middle(int *integer,
				t_stack *s_stack_a, t_stack *s_stack_b)
{
	if (integer[2] > integer[0])
	{
		if (s_stack_b->nbr_of_chunks == 1)
		{
			sb(s_stack_b);
			rrb(s_stack_b);
		}
		else
		{
			rb(s_stack_b);
			sb(s_stack_b);
			pa(s_stack_a, s_stack_b);
			pa(s_stack_a, s_stack_b);
			rrb(s_stack_b);
			pa(s_stack_a, s_stack_b);
			return ;
		}
	}
	pa(s_stack_a, s_stack_b);
	pa(s_stack_a, s_stack_b);
	pa(s_stack_a, s_stack_b);
}

void	case_b_of_pivot_in_the_end(int *integer,
			t_stack *s_stack_a, t_stack *s_stack_b)
{
	if (integer[1] > integer[0])
	{
		if (s_stack_b->nbr_of_chunks == 1)
		{
			rb(s_stack_b);
			pa(s_stack_a, s_stack_b);
			pa(s_stack_a, s_stack_b);
			pa(s_stack_a, s_stack_b);
			return ;
		}
		else
			sb(s_stack_b);
	}
	pa(s_stack_a, s_stack_b);
	sb(s_stack_b);
	pa(s_stack_a, s_stack_b);
	pa(s_stack_a, s_stack_b);
}

void	sorting_stack_b_of_three_tokens(t_stack *s_stack_a, t_stack *s_stack_b)
{
	t_token	*s_current_token;
	int		pivot;
	int		integer[3];
	int		i;

	pivot = get_pivot_of_chunk(s_stack_b);
	s_current_token = s_stack_b->head_of_stack;
	i = 0;
	while (i < s_stack_b->s_chunk->nbr_of_tokens)
	{
		integer[i] = s_current_token->integer;
		s_current_token = s_current_token->next;
		i++;
	}
	if (pivot == integer[0])
		case_b_of_pivot_in_the_top(integer, s_stack_a, s_stack_b);
	if (pivot == integer[1])
		case_b_of_pivot_in_the_middle(integer, s_stack_a, s_stack_b);
	if (pivot == integer[2])
		case_b_of_pivot_in_the_end(integer, s_stack_a, s_stack_b);
}
