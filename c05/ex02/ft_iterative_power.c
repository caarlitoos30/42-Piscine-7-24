/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:53:58 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/20 12:23:41 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(2, -1));
	return (0);
}
*/
