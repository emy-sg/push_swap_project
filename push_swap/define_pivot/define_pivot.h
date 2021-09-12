/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_pivot.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:35:03 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:35:09 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_PIVOT_H
# define DEFINE_PIVOT_H

# include "../push_swap.h"

int	get_pivot_of_chunk(t_stack *s_stack);
int	get_min_integer_of_chunk(t_stack *s_stack);
int	get_bigger_integer_then(t_stack *s_stack, int integer);

#endif
