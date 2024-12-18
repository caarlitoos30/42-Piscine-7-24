/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:33:17 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/22 23:32:41 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	y;
	int	z;

	i = 0;
	y = 1;
	z = 0;
	while (str[i] == 32 || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\t')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			y = y * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		z = (str[i] - '0') + (z * 10);
		i++;
	}
	return (z * y);
}
