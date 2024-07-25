/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:54:24 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/20 12:24:23 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (result * result < nb)
		result++;
	if (result * result == nb)
		return (result);
	else
		return (0);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_sqrt(9)); // 2
	printf("%d\n", ft_sqrt(0)); // 0
	printf("%d\n", ft_sqrt(1)); // 1
	printf("%d\n", ft_sqrt(2)); // 0
}
*/
