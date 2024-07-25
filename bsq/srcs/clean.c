/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:45:18 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/23 12:03:50 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_clean_map(t_map map)
{
	int	i;

	i = 0;
	while (map.matrix[i])
	{
		free(map.matrix[i]);
		i++;
	}
	free(map.matrix);
}

void	ft_clean(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}
