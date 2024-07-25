/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divide.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:05:12 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/23 13:12:40 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_add(char *src, int size)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc (sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_count_len_of_words(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_printable(str[i]))
		i++;
	return (i);
}

int	ft_count_number_of_words(char *str)
{
	int	i;
	int	count;
	int	word_len;

	i = 0;
	count = 0;
	word_len = 0;
	while (str[i])
	{
		while (str[i] && !ft_is_printable(str[i]))
			i++;
		word_len = ft_count_len_of_words(str + i);
		if (word_len)
			count++;
		i += word_len;
		word_len = 0;
	}
	return (count);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		word_len;
	int		counter_of_words;
	char	**tab;

	i = 0;
	j = 0;
	word_len = 0;
	counter_of_words = ft_count_number_of_words(str);
	tab = malloc(sizeof(char *) * (counter_of_words + 1));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (str[i] && !ft_is_printable(str[i]))
			i++;
		word_len = ft_count_len_of_words(str + i);
		if (word_len)
			tab[j++] = ft_add(str + i, word_len);
		i += word_len;
		word_len = 0;
	}
	tab[j] = 0;
	return (tab);
}
