/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 02:49:33 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/23 04:37:29 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	half;

	i = 0;
	temp = 0;
	half = size / 2;
	while (half-- > 0)
	{
		temp = tab[i];
		tab[i++] = tab[size - 1];
		tab[size-- - 1] = temp;
	}
}

// #include <stdio.h>

// void ft_rev_int_tab(int *tab, int size);
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Array original: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     ft_rev_int_tab(arr, size);

//     printf("Array invertido: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
