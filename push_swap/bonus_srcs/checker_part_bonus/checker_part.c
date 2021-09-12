/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_part.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:15:22 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:33:21 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	checker_part(t_checker *s_checker, int count_of_args, char **args)
{
	t_stack			s_stack_a;
	t_stack			s_stack_b;
	t_token			*s_token;
	t_instruction	*s_instruction;

	s_token = fill_tokens(count_of_args, args);
	init_stack(&s_stack_b);
	init_stack(&s_stack_a);
	s_stack_a.head_of_stack = s_token;
	s_instruction = s_checker->instruction_header;
	while (s_instruction)
	{
		applique_instruction(&s_stack_a, &s_stack_b, s_instruction->string);
		s_instruction = s_instruction->next;
	}
	if (!s_stack_b.head_of_stack)
		check_if_stack_a_is_sorted(&s_stack_a);
	else
		write(1, "KO\n", 3);
	lst_delete_tokens(s_token);
	delete_instructions(s_checker);
}
