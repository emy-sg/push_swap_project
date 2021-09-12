/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bigger_integer_then.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:34:28 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:58:34 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_there_is_any_integer_small_then_this_one(t_stack *s_stack,
			int *integer, int *bigger_then_integer)
{
	t_token	*s_token;
	int		i;
	int		new_integer;

	s_token = s_stack->head_of_stack;
	i = 0;
	while (i < s_stack->s_chunk->nbr_of_tokens)
	{
		new_integer = s_token->integer;
		if (new_integer < *bigger_then_integer && new_integer > *integer)
			*bigger_then_integer = new_integer;
		i++;
		s_token = s_token->next;
	}
}

int	get_bigger_integer_then(t_stack *s_stack, int integer)
{
	t_token	*s_token;
	int		new_integer;
	int		bigger_then_integer;
	int		i;

	s_token = s_stack->head_of_stack;
	i = 0;
	while (i < s_stack->s_chunk->nbr_of_tokens)
	{
		new_integer = s_token->integer;
		if (new_integer > integer)
		{
			bigger_then_integer = new_integer;
			break ;
		}
		i++;
		s_token = s_token->next;
	}
	check_if_there_is_any_integer_small_then_this_one(s_stack,
		&integer, &bigger_then_integer);
	return (bigger_then_integer);
}
