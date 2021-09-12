/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_chunks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:37:10 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:37:11 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 *
	typedef struct	s_chunk
	{
		int	nbr_of_tokens;
	}		t_chunk;

   	typedef struct	s_stack
	{
		t_token	*head_of_stack;
		int	nbr_of_chunks;
		t_chunk	*s_chunk;
	}		t_stack;

**/

t_chunk	*lst_new_chunk(int count)
{
	t_chunk	*s_chunk;

	s_chunk = malloc(sizeof(t_chunk));
	s_chunk->nbr_of_tokens = count;
	s_chunk->next = NULL;
	s_chunk->previous = NULL;
	return (s_chunk);
}

void	lst_add_front_chunk(t_stack *s_stack, t_chunk *s_new_chunk)
{
	if (s_stack->nbr_of_chunks == 0)
		s_stack->s_chunk = s_new_chunk;
	else
	{
		s_new_chunk->next = s_stack->s_chunk;
		s_stack->s_chunk->previous = s_new_chunk;
		s_stack->s_chunk = s_new_chunk;
	}
	s_stack->nbr_of_chunks++;
}

void	delete_chunk_from_stack(t_stack *s_stack)
{
	t_chunk	*s_first_chunk;

	s_first_chunk = s_stack->s_chunk;
	s_stack->s_chunk = s_first_chunk->next;
	s_first_chunk->next = NULL;
	if (s_stack->s_chunk)
		s_stack->s_chunk->previous = NULL;
	free(s_first_chunk);
	s_stack->nbr_of_chunks--;
}
