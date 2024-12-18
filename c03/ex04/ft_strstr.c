/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:24:45 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/16 21:14:54 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*
#include <stdio.h>

int    main(void)
{
    char str[] = "Hello corrector, we are trying to find world ";
    char to_find[] = "world";
    char *result;

    result = ft_strstr(str, to_find);
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    return (0);
}
*/
