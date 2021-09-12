/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_its_an_integer_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:29:52 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 12:29:53 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

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
