/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 08:40:32 by mtraball          #+#    #+#             */
/*   Updated: 2020/10/28 10:26:47 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int			ft_str_is_alpha(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr < 'A')
			return (0);
		if ((*charptr > 'Z' && *charptr < 'a') || (*charptr > 'z'))
			return (0);
		charptr++;
	}
	return (1);
}
