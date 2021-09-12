/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_stack_a_is_sorted_bonus.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:15:11 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:28:15 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	check_if_stack_a_is_sorted(t_stack *s_stack_a)
{
	t_token	*s_current_token;
	t_token	*s_next_token;
	int		i;

	s_current_token = s_stack_a->head_of_stack;
	s_next_token = s_current_token->next;
	i = 0;
	while (s_next_token)
	{
		if (s_current_token->integer > s_next_token->integer)
		{
			write(1, "KO\n", 3);
			return ;
		}
		else
		{
			s_current_token = s_next_token;
			s_next_token = s_next_token->next;
		}
		i++;
	}
	write(1, "OK\n", 3);
}
