/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_of_sorting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:35:31 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:35:32 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**

	STEP 1: pb till the stack_a is sorted or == 3 or ==2
	STEP 2: if nbr_in_chunk_b == 2, use sb and then pa and delete the chunk
			and nbr_of_chunk_a --
	STEP 3: if nbr_in_chunk_b == 3 and not sorted and need to rb or rrb 
					to be sorted,
			do it but remember how much you did of rb to redoit rrb,
			and then applic the step 2 if u need sb.
	STEP 4: if nbr_in_chunk_b > 3 and not sorted,
			- pb till the 

 * */

void	algo_of_sorting(int count_of_args, char **args)
{
	t_stack	s_stack_a;
	t_stack	s_stack_b;
	t_token	*s_token;

	if (count_of_args == 1)
		return ;
	s_token = fill_tokens(count_of_args, args);
	init_stack(&s_stack_a);
	s_stack_a.head_of_stack = s_token;
	create_chunk_in_stack(&s_stack_a, count_of_args);
	if (check_if_chunk_in_stack_a_is_sorted(&s_stack_a) != 0)
	{
		init_stack(&s_stack_b);
		quick_sort_method(&s_stack_a, &s_stack_b);
	}
	delete_chunk_from_stack(&s_stack_a);
	lst_delete_tokens(s_stack_a.head_of_stack);
}
