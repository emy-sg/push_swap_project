/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:40:27 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:40:28 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_stack *s_stack_a, t_stack *s_stack_b)
{
	swap_top_two_elt_of_stack(s_stack_a);
	swap_top_two_elt_of_stack(s_stack_b);
	write(1, "ss\n", 3);
}
