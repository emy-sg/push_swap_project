/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:36:27 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:36:28 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_stack(t_stack *s_stack)
{
	s_stack->head_of_stack = NULL;
	s_stack->nbr_of_chunks = 0;
	s_stack->s_chunk = NULL;
}
