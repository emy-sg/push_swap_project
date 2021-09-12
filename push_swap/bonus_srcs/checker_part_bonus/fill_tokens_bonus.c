/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tokens_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:32:08 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 11:32:09 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

t_token	*fill_tokens(int count, char **args)
{
	int		i;
	t_token	*s_token;

	i = 0;
	s_token = lst_new_token(ft_atoi(args[i]));
	while (++i < count)
		lst_add_back_token(s_token, lst_new_token(ft_atoi(args[i])));
	return (s_token);
}
