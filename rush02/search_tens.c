/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_tens.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:14:36 by calguaci          #+#    #+#             */
/*   Updated: 2024/07/21 22:38:23 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*search_tens(char t)
{
	if (t == '2')
		return ("20");
	else if (t == '3')
		return ("30");
	else if (t == '4')
		return ("40");
	else if (t == '5')
		return ("50");
	else if (t == '6')
		return ("60");
	else if (t == '7')
		return ("70");
	else if (t == '8')
		return ("80");
	else if (t == '9')
		return ("90");
	return ("0");
}

