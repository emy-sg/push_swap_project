/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:26:29 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 11:26:30 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	rr(t_stack *s_stack_a, t_stack *s_stack_b)
{
	rotate_stack(s_stack_a);
	rotate_stack(s_stack_b);
}
