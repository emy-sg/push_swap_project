/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_part_bonus.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:26:23 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:29:30 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_PART_BONUS_H
# define CHECKER_PART_BONUS_H

# include "../push_swap_bonus.h"

void	applique_instruction(t_stack *s_stack_a, t_stack *s_stack_b,
			char *instraction);
void	check_if_stack_a_is_sorted(t_stack *s_stack_a);
void	checker_part(t_checker *s_checker, int count_of_args, char **args);
t_token	*fill_tokens(int count, char **args);
void	init_checker(t_checker *s_checker);
void	init_stack(t_stack *s_stack);

#endif
