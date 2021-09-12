/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_its_a_digit_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:29:36 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:52:58 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

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
