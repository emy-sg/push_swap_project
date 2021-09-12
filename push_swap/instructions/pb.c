/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:39:40 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:39:41 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *s_stack_a, t_stack *s_stack_b)
{
	push_top_elt_to_stack_b(s_stack_a, s_stack_b);
	write(1, "pb\n", 3);
}
