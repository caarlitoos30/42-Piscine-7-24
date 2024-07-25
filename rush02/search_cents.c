/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_cents.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:34:04 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/21 22:39:05 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*search_cents(char c)
{
	if (t == '2')
		return ("200");
	else if (t == '3')
		return ("300");
	else if (t == '4')
		return ("400");
	else if (t == '5')
		return ("500");
	else if (t == '6')
		return ("600");
	else if (t == '7')
		return ("700");
	else if (t == '80')
		return ("800");
	else if (t == '9')
		return ("900");
	return ("0");
}

