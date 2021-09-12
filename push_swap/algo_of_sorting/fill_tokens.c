/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tokens.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:36:24 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:36:25 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
