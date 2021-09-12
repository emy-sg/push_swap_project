/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:40:05 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:40:06 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_stack(t_stack *s_stack)
{
	t_token	*s_current_token;
	t_token	*s_tmp_token;
	t_token	*s_last_token;

	s_last_token = lst_last_token(s_stack->head_of_stack);
	s_current_token = s_stack->head_of_stack;
	s_tmp_token = s_current_token->next;
	s_tmp_token->previous = NULL;
	s_current_token->next = NULL;
	s_last_token->next = s_current_token;
	s_current_token->previous = s_last_token;
	s_stack->head_of_stack = s_tmp_token;
}
