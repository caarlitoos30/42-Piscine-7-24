/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 20:28:54 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/25 01:09:07 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsig = src[i];
		i++;ned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dest[j]
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}


int main() {

    char str[] = "Hola, mundo!";
    printf("La longitud de '%s' es: %d\n", str, ft_strlen(str));
    char dest[20] = "Hola";
    char src[] = ", mundo!";
    unsigned int size = 20;
    unsigned int result = ft_strlcat(dest, src, size);
    printf("Resultado de ft_strlcat: %u\n", result);
    printf("Cadena resultante: '%s'\n", dest);

    return 0;
}