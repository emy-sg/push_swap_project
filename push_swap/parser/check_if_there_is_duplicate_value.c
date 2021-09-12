/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_there_is_duplicate_value.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:37:40 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:37:41 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_there_is_duplicates_value(int argc, char **argv)
{
	if (argc == 1)
		return ;
	if (check_duplicates_value(argc, argv))
	{
		write(1, "ERROR\n", 6);
		exit(1);
	}
}
