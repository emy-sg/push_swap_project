/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_its_an_integer.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:37:36 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:37:37 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_its_an_integer(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_atoi(argv[i]);
		i++;
	}
}
