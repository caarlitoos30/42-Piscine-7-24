/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:54:06 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/20 12:23:57 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(2, -1));
	return (0);
}
*/
