/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:54:36 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/20 15:55:11 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nbr)
{
	int	i;

	if (nbr <= 1)
		return (0);
	if (nbr == 2)
		return (1);
	if (nbr % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nbr)
{
	if (nbr <= 1)
		return (2);
	while (!ft_is_prime(nbr))
		nbr++;
	return (nbr);
}


#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(136));
}

