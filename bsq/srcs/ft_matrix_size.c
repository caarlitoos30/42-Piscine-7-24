/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:29:11 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/23 18:53:33 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	get_col_size(char **matrix)
{
	int	n_col;

	n_col = 0;
	while (matrix[n_col])
		n_col++;
	return (n_col);
}

int	get_row_size(char **matrix)
{
	int	n_row;

	n_row = 0;
	while (matrix[0][n_row])
		n_row++;
	return (n_row);
}
