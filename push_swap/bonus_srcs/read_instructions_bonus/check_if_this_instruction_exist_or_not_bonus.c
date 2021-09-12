/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_this_instruction_exist_or_not_bonu        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:16:14 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:39:26 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	instruction_of_two_character(char *string)
{
	if (ft_strncmp(string, "pa", 2) == 0)
		return (0);
	if (ft_strncmp(string, "pb", 2) == 0)
		return (0);
	if (ft_strncmp(string, "sa", 2) == 0)
		return (0);
	if (ft_strncmp(string, "sb", 2) == 0)
		return (0);
	if (ft_strncmp(string, "ss", 2) == 0)
		return (0);
	if (ft_strncmp(string, "ra", 2) == 0)
		return (0);
	if (ft_strncmp(string, "rb", 2) == 0)
		return (0);
	if (ft_strncmp(string, "rr", 2) == 0)
		return (0);
	return (1);
}

int	instruction_of_three_character(char *string)
{
	if (ft_strncmp(string, "rra", 3) == 0)
		return (0);
	if (ft_strncmp(string, "rrb", 3) == 0)
		return (0);
	if (ft_strncmp(string, "rrr", 3) == 0)
		return (0);
	return (1);
}

int	check_if_this_instruction_exist_or_not(char *string)
{
	if (ft_strlen(string) == 2)
		return (instruction_of_two_character(string));
	if (ft_strlen(string) == 3)
		return (instruction_of_three_character(string));
	return (1);
}
