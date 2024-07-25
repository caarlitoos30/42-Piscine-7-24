/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:02:10 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/16 18:00:39 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main()
{
    char dest[100] = "Hola, ";
    char src[] = "mundo!";
    
    printf("before: %s\n", dest);
    ft_strcat(dest, src);
    printf("after: %s\n", dest);
    
    return 0;
}
*/
