/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:12:48 by phenriq2          #+#    #+#             */
/*   Updated: 2023/11/18 11:44:41 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_point
{
	int	x;
	int	y;
}		t_point;

void	fill(char **map, t_point size, t_point begin, char cur)
{
	if (begin.y < 0 || begin.x < 0 || begin.y >= size.y || begin.x >= size.x
		|| map[begin.y][begin.x] != cur)
		return ;
	map[begin.y][begin.x] = 'F';
	fill(map, size, (t_point){begin.x - 1, begin.y}, cur);
	fill(map, size, (t_point){begin.x + 1, begin.y}, cur);
	fill(map, size, (t_point){begin.x, begin.y - 1}, cur);
	fill(map, size, (t_point){begin.x, begin.y + 1}, cur);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
