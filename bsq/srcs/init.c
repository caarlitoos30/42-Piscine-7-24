/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:03:52 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/23 18:19:59 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_initialize(int argc, char *argv)
{
	t_map	map;

	map = ft_get(argc, argv);
	if (!map.valid)
	{
		error_map();
		ft_clean_map(map);
		return (0);
	}
	else if (map.valid < 0)
	{
		error_map();
		return (0);
	}
	ft_resolv_map(map);
	print_map(map);
	ft_clean_map(map);
	return (1);
}
