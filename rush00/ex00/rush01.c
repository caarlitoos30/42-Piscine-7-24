/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:28:02 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/06 19:40:26 by pvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	comprobar(int f, int c, int cont_f, int cont_c)
{
	if (cont_f == 1)
	{
		if (cont_c == c)
			ft_putchar('\\');
		else if (cont_c == 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else if (cont_f == f)
	{
		if (cont_c == c)
			ft_putchar('/');
		else if (cont_c == 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else
	{
		if ((cont_c == c) || (cont_c == 1))
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int c, int f)
{
	int		cont_f;
	int		cont_c;

	cont_f = 1;
	if ((c > 0) && (f > 0))
	{
		while (cont_f <= f)
		{
			cont_c = 1;
			while (cont_c <= c)
			{
				comprobar(f, c, cont_f, cont_c);
				cont_c ++;
			}
			ft_putchar('\n');
			cont_f ++;
		}
	}
	else
	{
		write (1, "ERROR", 5);
	}
}
