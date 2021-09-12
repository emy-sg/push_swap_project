/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pivot_of_the_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:34:55 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 11:09:28 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
 
	 how to calculate pivot ??
	 Is by sorting all the number in virtual table;
	
  */

int	get_pivot_of_chunk(t_stack *s_stack)
{
	int	*tab;
	int	pivot;
	int	count;
	int	i;

	count = s_stack->s_chunk->nbr_of_tokens;
	tab = (int *)malloc((count) * sizeof(int));
	tab[0] = get_min_integer_of_chunk(s_stack);
	i = 1;
	while (i < count)
	{
		tab[i] = get_bigger_integer_then(s_stack, tab[i - 1]);
		i++;
	}
	if (count % 2 == 0)
		pivot = tab[(count / 2) - 1];
	else
		pivot = tab[count / 2];
	free(tab);
	return (pivot);
}
