/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:51:19 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/23 11:03:35 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_copy_map(char **array_map)
{
	char	**new;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (array_map[len])
		len++;
	new = malloc(sizeof(char *) * (len + 1));
	while (array_map[i])
	{
		new[i] = ft_strdup(array_map[i]);
		i++;
	}
	new[len] = 0;
	return (new);
}
