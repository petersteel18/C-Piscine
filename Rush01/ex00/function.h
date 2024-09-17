/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dumba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:11:40 by dumba             #+#    #+#             */
/*   Updated: 2024/09/15 14:03:27 by dumba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

int	ft_atoi(char *str);
int	ft_strlen(char *str);
int	*get_numbers(char *str);
int	check(int argc, char **argv);
int	double_check(int tab[4][4], int pos, int num);
int	check_row_left(int *tab, int pos, int *entry);
int	check_col_down(int *tab, int pos, int *entry);
int	check_row_right(int *tab, int pos, int *entry);
int	check_col_up(int *tab, int pos, int *entry);
#endif
