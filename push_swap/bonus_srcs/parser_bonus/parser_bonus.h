/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:30:02 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 15:52:04 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_BONUS_H
# define PARSER_BONUS_H

# include "../push_swap_bonus.h"

void	parsing(int argc, char **argv);
void	check_if_its_a_digit(int argc, char **argv);
int		check_its_digit(const char *arg);
void	check_if_its_an_integer(int argc, char **argv);
void	check_if_there_is_duplicates_value(int argc, char **argv);
int		check_duplicates_value(int count, char **argv);	

#endif
