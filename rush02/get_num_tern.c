/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_num_tern.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:55:08 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/21 19:04:22 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_num_tern(char *nb)
{
	int	length;

	if (nb == 0)
		return (1);
	length = ft_strlen(nb);
	return ((length + 2) / 3);
}
