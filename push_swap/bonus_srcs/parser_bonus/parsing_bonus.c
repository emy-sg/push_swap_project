/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:30:06 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 12:30:07 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	parsing(int argc, char **argv)
{
	check_if_its_a_digit(argc, argv);
	check_if_its_an_integer(argc, argv);
	check_if_there_is_duplicates_value(argc - 1, argv + 1);
}
