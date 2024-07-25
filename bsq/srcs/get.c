/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:36:17 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/23 18:22:52 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_get_parms(char *empty, char *obs, char *full, char *first_line)
{
	int	i;

	i = 0;
	while (ft_is_printable(first_line[i]))
		i++;
	i--;
	if (ft_is_printable(first_line[i]))
	{
		*full = first_line[i];
		i--;
	}
	if (ft_is_printable(first_line[i]))
	{
		*obs = first_line[i];
		i--;
	}
	if (ft_is_printable(first_line[i]))
	{
		*empty = first_line[i];
		i--;
	}
	if (!ft_is_number(first_line[i]))
		*full = 0;
}

t_map	ft_get(int argc, char *argv)
{
	t_map	map;
	char	**total_map;
	char	**copy_of_map;

	if (!argc)
		total_map = ft_read();
	else
		total_map = ft_read_file(argv);
	if (!total_map)
	{
		map.valid = -1;
		return (map);
	}
	ft_get_parms(&map.empty, &map.obs, &map.full, total_map[0]);
	map.valid = ft_validate(total_map, map);
	copy_of_map = ft_copy_map(total_map + 1);
	map.matrix = copy_of_map;
	if (!map.empty || !map.obs || !map.full)
		map.valid = 0;
	if (map.empty == map.obs || map.empty == map.full || map.full == map.obs)
		map.valid = 0;
	ft_clean(total_map);
	return (map);
}
