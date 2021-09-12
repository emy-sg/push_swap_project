/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:26:01 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 11:26:02 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	rrr(t_stack *s_stack_a, t_stack *s_stack_b)
{
	reverse_rotation_of_stack(s_stack_a);
	reverse_rotation_of_stack(s_stack_b);
}
