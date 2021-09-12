/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_its_digit_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:29:58 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:54:20 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	check_its_digit(const char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
		{
			write(2, "ERROR\n", 6);
			exit (1);
		}
		i++;
	}
	return (1);
}
