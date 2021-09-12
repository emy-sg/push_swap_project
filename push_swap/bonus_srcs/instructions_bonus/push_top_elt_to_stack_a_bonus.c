/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_top_elt_to_stack_a_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:39:46 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 11:27:35 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	push_top_elt_to_stack_a(t_stack *s_stack_a, t_stack *s_stack_b)
{
	t_token	*s_current_token;

	s_current_token = s_stack_b->head_of_stack;
	s_stack_b->head_of_stack = s_current_token->next;
	if (s_stack_b->head_of_stack)
		s_stack_b->head_of_stack->previous = NULL;
	s_current_token->next = NULL;
	lst_add_front_token(s_stack_a, s_current_token);
}
