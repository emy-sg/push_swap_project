/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:40:18 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:40:19 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_stack *s_stack_a, t_stack *s_stack_b)
{
	reverse_rotation_of_stack(s_stack_a);
	reverse_rotation_of_stack(s_stack_b);
	write(1, "rrr\n", 4);
}
