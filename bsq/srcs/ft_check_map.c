/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:28:46 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/23 18:23:33 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_check_len(char **array_map)
{
	int	i;
	int	j;
	int	len_line;
	int	len_diff;

	i = 0;
	j = 0;
	while (array_map[i])
	{
		j = ft_len_printable(array_map[i]);
		if (len_line != j)
			len_diff++;
		len_line = j;
		j = 0;
		i++;
	}
	if (len_diff >= 2)
		return (0);
	return (1);
}

int	ft_check_values(char **array_map, t_map map)
{
	int	i;
	int	j;
	int	line;

	i = 0;
	j = 0;
	line = ft_atoi(array_map[0]);
	array_map++;
	while (array_map[i])
	{
		while (ft_is_printable(array_map[i][j]))
		{
			if ((array_map[i][j] != map.empty && array_map[i][j] != map.obs))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	if (line != i)
		return (0);
	return (1);
}

int	ft_validate(char **array_map, t_map map)
{
	if (!ft_check_len(array_map)
		|| !ft_check_values(array_map, map))
		return (0);
	return (1);
}
