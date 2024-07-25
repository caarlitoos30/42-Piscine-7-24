/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_explorer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:18:45 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/23 17:06:47 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_map	paint_square(t_map map, t_square square)
{
	int	x;
	int	y;

	if (map.matrix == NULL)
		return (map);
	x = square.x_init;
	while (x <= square.x_end)
	{
		y = square.y_init;
		while (y <= square.y_end)
		{
			map.matrix[x][y] = map.full;
			y++;
		}
		x++;
	}
	return (map);
}

t_square	find_square(t_map map, t_square square, int x_init, int y_init)
{
	t_square	new_square;

	new_square.x_init = x_init;
	new_square.y_init = y_init;
	new_square.x_end = x_init + get_size(square);
	new_square.y_end = y_init + get_size(square);
	if (!check_valid_square(map, new_square))
	{
		new_square.x_init = -1;
		return (new_square);
	}
	while (check_valid_square(map, new_square))
	{
		new_square.x_end++;
		new_square.y_end++;
	}
	new_square.x_end--;
	new_square.y_end--;
	return (new_square);
}

int	get_size(t_square square)
{
	return (square.x_end - square.x_init + 1);
}

int	check_valid_square(t_map map, t_square square)
{
	int	x;
	int	y;

	if (square.x_end > get_col_size(map.matrix) - 1
		|| square.y_end > get_row_size(map.matrix) - 1)
		return (0);
	x = square.x_init;
	while (x <= square.x_end)
	{
		y = square.y_init;
		while (y <= square.y_end)
		{
			if (map.matrix[x][y] == map.obs)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

t_map	ft_resolv_map(t_map map)
{
	int			x;
	int			y;
	int			count;
	t_square	square;
	t_square	tmp;

	x = -1;
	count = 0;
	square.x_end = -1;
	square.x_init = 0;
	while (++x < get_col_size(map.matrix))
	{
		y = -1;
		while (++y < get_row_size(map.matrix))
		{
			tmp = find_square(map, square, x, y);
			if (tmp.x_init != -1 && get_size(tmp) > get_size(square))
			{
				count++;
				square = tmp;
			}
		}
	}
	map = paint_square(map, square);
	return (map);
}
