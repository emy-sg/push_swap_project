/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_its_digit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:37:43 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:37:44 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
