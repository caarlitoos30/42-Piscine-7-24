/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:38:14 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/16 18:00:12 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char dest[50] = "Hello, ";
	char src[] = "World!";
	unsigned int nb = 4;

	printf("Before ft_strncat:\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);

	ft_strncat(dest, src, nb);

	printf("After ft_strncat:\n");
	printf("dest: %s\n", dest);

	return 0;
}
*/