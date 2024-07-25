/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 01:19:41 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/23 02:38:34 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	uns;
	char	decs;
	char	cents;

	uns = '0' - 1;
	while (uns++ <= '9')
	{
		decs = uns;
		while (++decs <= '9')
		{
			cents = decs + 1;
			while (cents <= '9')
			{
				ft_putchar(uns);
				ft_putchar(decs);
				ft_putchar(cents);
				if (uns != '7' || decs != '8' || cents != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				cents++;
			}
		}
	}
}

// int main(void)
// {
// 	ft_print_comb();
// 	return 0;
// }