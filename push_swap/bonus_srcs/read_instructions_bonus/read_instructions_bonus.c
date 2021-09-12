/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instructions_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:24:34 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:42:23 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	read_instructions(int fd_input, t_checker *s_checker)
{
	char			*line;
	int				return_get_next_line;
	t_instruction	*s_new_instruction;

	line = NULL;
	return_get_next_line = get_next_line(fd_input, &line);
	while (return_get_next_line > 0)
	{
		if (check_if_this_instruction_exist_or_not(line))
		{
			free(line);
			delete_instructions(s_checker);
			write(1, "Error\n", 6);
			exit(1);
		}
		s_new_instruction = lst_new_instruction(line);
		lst_add_back_instruction(s_checker, s_new_instruction);
		free(line);
		line = NULL;
		return_get_next_line = get_next_line(fd_input, &line);
	}
}
