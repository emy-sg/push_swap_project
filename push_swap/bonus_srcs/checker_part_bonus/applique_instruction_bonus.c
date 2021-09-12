/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applique_instruction_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:24:16 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:26:49 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	applique_instruction(t_stack *s_stack_a, t_stack *s_stack_b,
			char *instraction)
{
	if (ft_strlen(instraction) == 2 && ft_strncmp(instraction, "pa", 2) == 0)
		pa(s_stack_a, s_stack_b);
	if (ft_strlen(instraction) == 2 && ft_strncmp(instraction, "pb", 2) == 0)
		pb(s_stack_a, s_stack_b);
	if (ft_strlen(instraction) == 2 && ft_strncmp(instraction, "sa", 2) == 0)
		sa(s_stack_a);
	if (ft_strlen(instraction) == 2 && ft_strncmp(instraction, "sb", 2) == 0)
		sb(s_stack_b);
	if (ft_strlen(instraction) == 2 && ft_strncmp(instraction, "ss", 2) == 0)
		ss(s_stack_a, s_stack_b);
	if (ft_strlen(instraction) == 2 && ft_strncmp(instraction, "ra", 2) == 0)
		ra(s_stack_a);
	if (ft_strlen(instraction) == 2 && ft_strncmp(instraction, "rb", 2) == 0)
		rb(s_stack_b);
	if (ft_strlen(instraction) == 2 && ft_strncmp(instraction, "rr", 2) == 0)
		rr(s_stack_a, s_stack_b);
	if (ft_strlen(instraction) == 3 && ft_strncmp(instraction, "rra", 3) == 0)
		rra(s_stack_a);
	if (ft_strlen(instraction) == 3 && ft_strncmp(instraction, "rrb", 3) == 0)
		rrb(s_stack_b);
	if (ft_strlen(instraction) == 3 && ft_strncmp(instraction, "rrr", 3) == 0)
		rrr(s_stack_a, s_stack_b);
}
