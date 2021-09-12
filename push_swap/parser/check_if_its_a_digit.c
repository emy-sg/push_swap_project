/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_its_a_digit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:37:29 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:37:30 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_its_a_digit(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		check_its_digit(argv[i]);
		i++;
	}
}
