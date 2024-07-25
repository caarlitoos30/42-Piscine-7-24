/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:21:21 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/16 21:33:25 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";
    char str4[] = "Hel";

    printf("Comparing '%s' y '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("Comparing '%s' y '%s': %d\n", str1, str3, ft_strcmp(str1, str3));
    printf("Comparing '%s' y '%s': %d\n", str1, str4, ft_strcmp(str1, str4));
    printf("Comparing '%s' y '%s': %d\n", str4, str1, ft_strcmp(str4, str1));

    return 0;
}

*/
