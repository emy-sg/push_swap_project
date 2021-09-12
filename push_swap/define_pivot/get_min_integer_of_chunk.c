/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_integer_of_chunk.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:34:48 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:34:49 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min_integer_of_chunk(t_stack *s_stack)
{
	t_token	*s_token;
	int		min_integer;
	int		new_integer;
	int		count;
	int		i;

	s_token = s_stack->head_of_stack;
	count = s_stack->s_chunk->nbr_of_tokens;
	min_integer = s_token->integer;
	s_token = s_token->next;
	i = 1;
	while (i < count)
	{
		new_integer = s_token->integer;
		if (min_integer > new_integer)
			min_integer = new_integer;
		s_token = s_token->next;
		i++;
	}
	return (min_integer);
}
