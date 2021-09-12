/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_bonus.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:55:06 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:55:07 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_BONUS_H
# define LINKED_LIST_BONUS_H

# include "../push_swap_bonus.h"

typedef struct s_token
{
	int				integer;
	struct s_token	*next;
	struct s_token	*previous;
}					t_token;

typedef struct s_stack
{
	t_token	*head_of_stack;
}		t_stack;

t_token	*lst_new_token(int item);
void	lst_add_back_token(t_token *s_token, t_token *s_new_token);
t_token	*lst_last_token(t_token *s_token);
void	lst_add_front_token(t_stack *s_stack, t_token *s_new_token);
void	lst_delete_tokens(t_token *s_token);

#endif
