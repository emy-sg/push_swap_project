/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:25:29 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 11:25:30 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ss(t_stack *s_stack_a, t_stack *s_stack_b)
{
	swap_top_two_elt_of_stack(s_stack_a);
	swap_top_two_elt_of_stack(s_stack_b);
}
