/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argumento.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dumba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:03:38 by dumba             #+#    #+#             */
/*   Updated: 2024/09/15 15:29:05 by dumba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"
#include <stdlib.h>

int	check(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 31)
		return (1);
	return (0);
}

int	*get_numbers(char *str)
{
	int	col;
	int	row;
	int	*tab;

	tab = malloc(4 * 16);
	if (!tab)
		return (0);
	col = -1;
	row = 0;
	while (str[++col] != '\0')
		if (str[col] >= '0' && str[col] <= '9')
			tab[row++] = ft_atoi(str + col);
	return (tab);
}
