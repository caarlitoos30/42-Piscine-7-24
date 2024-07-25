/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:00:05 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/23 11:03:20 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "ft.h"

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dup = (char *)malloc((len) * sizeof(*dup));
	if (!dup || !src)
		return (NULL);
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
