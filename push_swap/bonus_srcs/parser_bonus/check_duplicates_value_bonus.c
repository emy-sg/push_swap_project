/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates_value_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:29:32 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 12:29:33 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	check_duplicates_value(int count, char **argv)
{
	int	*table;
	int	i;
	int	j;

	table = malloc((count + 1) * sizeof(int));
	j = 0;
	table[0] = ft_atoi(argv[0]);
	i = 1;
	while (i < count)
	{
		table[i] = ft_atoi(argv[i]);
		j = 0;
		while (j < i)
		{
			if (table[j] == table[i])
			{
				free(table);
				return (1);
			}
			j++;
		}
		i++;
	}
	free(table);
	return (0);
}
