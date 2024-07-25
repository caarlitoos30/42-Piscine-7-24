/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 03:38:55 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/23 04:01:19 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i + 1] < tab[i])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

// #include <stdio.h>

// void ft_sort_int_tab(int *tab, int size);

// int main() {
//     int array[] = {5, 3, 8, 1, 2};
//     int size = 5;
//     ft_sort_int_tab(array, size);  
//     for (int i = 0; i < size; i++)
//         printf("%d ", array[i]);
//     printf("\n");

//     return 0;
// }