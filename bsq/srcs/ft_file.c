/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:07:56 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/23 12:41:23 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_size(char *dictpath, int *file)
{
	char	c;
	int		new;
	int		num;
	int		counter;

	*file = open(dictpath, O_RDONLY);
	if (*file == -1)
		return (-1);
	counter = 0;
	new = 0;
	num = 0;
	while (read(*file, &c, 1) && new < 2)
	{
		if (c == '\n')
		{
			num++;
			new++;
		}
		if (ft_is_printable(c))
			new = 0;
		counter++;
	}
	if (num < 1 || new >= 2)
		return (0);
	return (counter);
}

char	**ft_read(void)
{
	char	*buffer;
	char	**split;
	int		bytes;

	buffer = malloc (sizeof(char) * (BUFFER + 1));
	if (!buffer)
		return (0);
	bytes = read(0, buffer, BUFFER);
	if (bytes <= 0)
	{
		free(buffer);
		return (0);
	}
	buffer[bytes] = '\0';
	split = ft_split(buffer);
	free(buffer);
	return (split);
}

char	**ft_read_file(char *pathmap)
{
	char	*buffer;
	char	**split;
	int		file;
	int		size;
	int		bytes;

	size = ft_size(pathmap, &file);
	if (size <= 0)
		return (0);
	close(file);
	file = open(pathmap, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc (sizeof(char) * (size + 1));
	if (!buffer)
	{
		close (file);
		return (0);
	}
	bytes = read(file, buffer, size);
	buffer[bytes] = '\0';
	split = ft_split(buffer);
	free(buffer);
	close(file);
	return (split);
}
