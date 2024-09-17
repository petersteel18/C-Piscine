/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dumba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:26:35 by dumba             #+#    #+#             */
/*   Updated: 2024/09/15 15:28:33 by dumba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"
#include <stdlib.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

int	check_case(int tab[4][4], int pos, int entry[16])
{
	if (check_row_left(*tab, pos, entry) == 1)
		return (1);
	if (check_row_right(*tab, pos, entry) == 1)
		return (1);
	if (check_col_down(*tab, pos, entry) == 1)
		return (1);
	if (check_col_up(*tab, pos, entry) == 1)
		return (1);
	return (0);
}

int	solve(int tab[4][4], int entry[16], int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		if (double_check(tab, pos, size) == 0)
		{
			tab[pos / 4][pos % 4] = size;
			if (check_case(tab, pos, entry) == 0)
			{
				if (solve(tab, entry, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}

void	show_solution(int tab[4][4])
{
	int	col;
	int	row;

	col = -1;
	while (++col < 4)
	{
		row = -1;
		while (++row < 4)
		{
			ft_putnbr(tab[col][row]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int	tab[4][4];
	int	*entry;
	int	col;
	int	row;

	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			tab[col][row] = 0;
			row++;
		}
		col++;
	}
	if (check(argc, argv) == 1)
		return (0);
	entry = get_numbers(argv[1]);
	if (solve(tab, entry, 0) == 1)
		show_solution(tab);
	else
		ft_putstr("Error\n");
	free(entry);
	return (0);
}
