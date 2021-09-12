/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:11:19 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:56:42 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_checker	s_checker;

	if (argc > 1)
	{
		parsing(argc, argv);
		init_checker(&s_checker);
		read_instructions(0, &s_checker);
		checker_part(&s_checker, argc - 1, argv + 1);
	}
	return (0);
}
