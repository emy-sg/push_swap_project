/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:40:08 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:40:09 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_stack *s_stack_a, t_stack *s_stack_b)
{
	rotate_stack(s_stack_a);
	rotate_stack(s_stack_b);
	write(1, "rr\n", 3);
}
