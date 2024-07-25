/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:06:35 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/16 21:20:16 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_change(char c, int toup)
{
	if (toup)
	{
		if (c >= 'a' && c <= 'z')
			c -= 32;
	}
	else
		if (c >= 'A' && c <= 'Z')
			c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	toup;

	i = 0;
	toup = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			str[i] = ft_change(str[i], toup);
			toup = 0;
		}
		else
			toup = 1;
		i++;
	}
	return (str);
}

/*int main()
{
    char str[] = "Hello, this is a 42 code test, inclluding; speial characters";
    printf("Antes: %s\n", str);
    ft_strcapitalize(str);
    printf("After: %s\n", str);
    return 0;
}
*/