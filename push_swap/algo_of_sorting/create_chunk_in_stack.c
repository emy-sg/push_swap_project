/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_chunk_in_stack.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:36:11 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:36:12 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	create_chunk_in_stack(t_stack *s_stack, int count_of_tokens)
{
	t_chunk	*s_new_chunk;

	s_new_chunk = lst_new_chunk(count_of_tokens);
	lst_add_front_chunk(s_stack, s_new_chunk);
}
