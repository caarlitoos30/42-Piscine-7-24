/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:23:23 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/24 17:08:36 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	error(void)
{
	write (2, "Error\n", 6);
}

void	error_map(void)
{
	write (2, "map error\n", 10);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc--;
	argv++;
	while (i < argc)
	{
		ft_initialize(argc, argv[i]);
		i++;
	}
	if (argc == 0)
	{
		ft_initialize(argc, argv[i]);
	}
	return (0);
}
