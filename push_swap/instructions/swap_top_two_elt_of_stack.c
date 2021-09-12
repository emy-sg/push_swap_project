/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_top_two_elt_of_stack.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:40:30 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:40:31 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_top_two_elt_of_stack(t_stack *s_stack)
{
	t_token	*s_current_token;
	t_token	*s_tmp_token;
	t_token	*next_tmp;

	s_current_token = s_stack->head_of_stack;
	s_tmp_token = s_current_token->next;
	next_tmp = s_tmp_token->next;
	s_current_token->next = next_tmp;
	if (next_tmp)
		next_tmp->previous = s_current_token;
	s_current_token->previous = s_tmp_token;
	s_tmp_token->next = s_current_token;
	s_tmp_token->previous = NULL;
	s_stack->head_of_stack = s_tmp_token;
}
