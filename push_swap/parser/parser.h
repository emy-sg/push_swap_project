/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:37:47 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 10:37:48 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "../push_swap.h"

void	parsing(int argc, char **argv);
void	check_if_its_a_digit(int argc, char **argv);
int		check_its_digit(const char *arg);
void	check_if_its_an_integer(int argc, char **argv);
void	check_if_there_is_duplicates_value(int argc, char **argv);
int		check_duplicates_value(int count, char **argv);	

#endif
