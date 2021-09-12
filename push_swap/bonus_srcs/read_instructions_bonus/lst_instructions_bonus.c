/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_instructions_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:24:30 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:40:15 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

/*
 
   typedef struct	s_instruction
   {
	char	*string;
	struct	s_instruction	*next;
   }		t_instruction;
   typedef struct	s_checker
   {
	t_instruction	*instruction_header;
   }		t_checker;
 */

t_instruction	*lst_new_instruction(char *string)
{
	t_instruction	*s_instruction;

	s_instruction = malloc(sizeof(t_instruction));
	s_instruction->string = ft_strdup(string);
	s_instruction->next = NULL;
	return (s_instruction);
}

void	lst_add_back_instruction(t_checker *s_checker,
			t_instruction *new_instruction)
{
	t_instruction	*s_tmp_instruction;

	if (!s_checker->instruction_header)
	{
		s_checker->instruction_header = new_instruction;
		s_checker->instruction_header
			= s_checker->instruction_header;
	}
	else
	{
		s_tmp_instruction = lst_last_instruction(s_checker);
		s_tmp_instruction->next = new_instruction;
	}
}

t_instruction	*lst_last_instruction(t_checker *s_checker)
{
	t_instruction	*s_tmp_instruction;

	s_tmp_instruction = s_checker->instruction_header;
	while (s_tmp_instruction->next)
		s_tmp_instruction = s_tmp_instruction->next;
	return (s_tmp_instruction);
}

void	delete_instructions(t_checker *s_checker)
{
	t_instruction	*s_current_instruction;
	t_instruction	*s_tmp_instruction;

	s_tmp_instruction = s_checker->instruction_header;
	if (!s_tmp_instruction)
		return ;
	while (s_tmp_instruction->next)
	{
		s_current_instruction = s_tmp_instruction;
		s_tmp_instruction = s_tmp_instruction->next;
		free(s_current_instruction->string);
		free(s_current_instruction);
	}
	if (s_tmp_instruction)
	{
		free(s_tmp_instruction->string);
		free(s_tmp_instruction);
	}
}
