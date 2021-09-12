/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:38:01 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:38:02 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 	The main goal of this project is to sort data on a stack,
	with a limited set of instructions, using the lowest possible 
	number of actions.
 **/

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		parsing(argc, argv);
		algo_of_sorting(argc - 1, argv + 1);
	}
	return (0);
}
