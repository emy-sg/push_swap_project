/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:37:06 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:37:07 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

# include "../push_swap.h"

typedef struct s_token
{
	int				integer;
	struct s_token	*next;
	struct s_token	*previous;
}					t_token;

typedef struct s_chunk
{
	int				nbr_of_tokens;
	struct s_chunk	*next;
	struct s_chunk	*previous;
}					t_chunk;

typedef struct s_stack
{
	t_token	*head_of_stack;
	int		nbr_of_chunks;
	t_chunk	*s_chunk;
}			t_stack;

t_token	*lst_new_token(int item);
void	lst_add_back_token(t_token *s_token, t_token *s_new_token);
t_token	*lst_last_token(t_token *s_token);
void	lst_add_front_token(t_stack *s_stack, t_token *s_new_token);
void	lst_delete_tokens(t_token *s_token);

t_chunk	*lst_new_chunk(int count);
void	lst_add_front_chunk(t_stack *s_stack, t_chunk *s_new_chunk);
void	delete_chunk_from_stack(t_stack *s_stack);

#endif
