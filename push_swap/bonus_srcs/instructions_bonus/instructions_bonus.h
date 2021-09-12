/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_bonus.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:21:53 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 11:22:05 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_BONUS_H
# define INSTRUCTIONS_BONUS_H

# include "../push_swap_bonus.h"

void	pa(t_stack *s_stack_a, t_stack *s_stack_b);
void	push_top_elt_to_stack_a(t_stack *s_stack_a, t_stack *s_stack_b);
void	pb(t_stack *s_stack_a, t_stack *s_stack_b);
void	push_top_elt_to_stack_b(t_stack *s_stack_a, t_stack *s_stack_b);
void	ra(t_stack *s_stack_a);
void	rb(t_stack *s_stack_a);
void	rr(t_stack *s_stack_a, t_stack *s_stack_b);
void	rotate_stack(t_stack *s_stack);
void	rra(t_stack *s_stack_a);
void	rrb(t_stack *s_stack_b);
void	rrr(t_stack *s_stack_a, t_stack *s_stack_b);
void	reverse_rotation_of_stack(t_stack *s_stack);
void	sa(t_stack *s_stack_a);
void	sb(t_stack *s_stack_b);
void	ss(t_stack *s_stack_a, t_stack *s_stack_b);
void	swap_top_two_elt_of_stack(t_stack *s_stack);

#endif
