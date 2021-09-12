/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_tokens_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:37:29 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:37:30 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

/**
 	typedef struct	s_token
	{
		int		integer;
		struct s_token	*next;
		struct s_token	*previous;
	}			t_token;
 **/

t_token	*lst_new_token(int item)
{
	t_token	*s_token;

	s_token = malloc(sizeof(t_token));
	if (!s_token)
		exit(1);
	s_token->integer = item;
	s_token->next = NULL;
	s_token->previous = NULL;
	return (s_token);
}

void	lst_add_back_token(t_token *s_token, t_token *s_new_token)
{
	t_token	*s_tmp_token;

	if (!s_token)
		s_token = s_new_token;
	else
	{
		s_tmp_token = lst_last_token(s_token);
		s_tmp_token->next = s_new_token;
		s_new_token->previous = s_tmp_token;
	}
}

t_token	*lst_last_token(t_token *s_token)
{
	t_token	*s_tmp_token;

	s_tmp_token = s_token;
	while (s_tmp_token->next)
		s_tmp_token = s_tmp_token->next;
	return (s_tmp_token);
}

void	lst_add_front_token(t_stack *s_stack, t_token *s_new_token)
{
	t_token	*s_top_token;

	if (!s_stack->head_of_stack)
		s_stack->head_of_stack = s_new_token;
	else
	{
		s_top_token = s_stack->head_of_stack;
		s_top_token->previous = s_new_token;
		s_new_token->next = s_top_token;
		s_stack->head_of_stack = s_new_token;
	}
}

void	lst_delete_tokens(t_token *s_token)
{
	t_token	*s_tmp_token;

	s_tmp_token = s_token;
	while (s_tmp_token)
	{
		s_token = s_tmp_token->next;
		free(s_tmp_token);
		s_tmp_token = s_token;
	}
}
