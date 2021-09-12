/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instructions_bonus.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:48:28 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:50:16 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_INSTRUCTIONS_BONUS_H
# define READ_INSTRUCTIONS_BONUS_H

# include "../push_swap_bonus.h"

typedef struct s_instruction
{
	char					*string;
	struct s_instruction	*next;
}							t_instruction;

typedef struct s_checker
{
	t_instruction	*instruction_header;
}					t_checker;

t_instruction	*lst_new_instruction(char *string);
void			lst_add_back_instruction(t_checker *s_checker,
					t_instruction *new_instruction);
t_instruction	*lst_last_instruction(t_checker *s_checker);
void			delete_instructions(t_checker *s_checker);
void			read_instructions(int fd_input, t_checker *s_checker);
int				check_if_this_instruction_exist_or_not(char *string);
int				instruction_of_two_character(char *string);
int				instruction_of_three_character(char *string);

#endif
