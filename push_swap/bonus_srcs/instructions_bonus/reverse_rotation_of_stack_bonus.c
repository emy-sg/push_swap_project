/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotation_of_stack_bonus.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:40:02 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 11:26:51 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	reverse_rotation_of_stack(t_stack *s_stack)
{
	t_token	*s_head_token;
	t_token	*s_before_last_token;
	t_token	*s_last_token;

	s_head_token = s_stack->head_of_stack;
	s_last_token = lst_last_token(s_stack->head_of_stack);
	s_before_last_token = s_last_token->previous;
	s_before_last_token->next = NULL;
	s_last_token->previous = NULL;
	s_head_token->previous = s_last_token;
	s_last_token->next = s_head_token;
	s_stack->head_of_stack = s_last_token;
}
