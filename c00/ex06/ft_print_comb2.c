/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:50:22 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/24 20:55:18 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			c = (a / 10) + '0';
			write(1, &c, 1);
			c = (a % 10) + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			c = (b / 10) + '0';
			write(1, &c, 1);
			c = (b % 10) + '0';
			write(1, &c, 1);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
		}
	}
}

/* int main()
{
    ft_print_comb2();
    return(0);
} */