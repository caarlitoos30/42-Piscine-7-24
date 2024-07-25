/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:52:19 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/23 18:19:59 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_map
{
	char	empty;
	char	obs;
	char	full;
	char	**matrix;
	int		valid;
}	t_map;

typedef struct s_square
{
	int	x_init;
	int	y_init;
	int	x_end;
	int	y_end;
}	t_square;

#endif