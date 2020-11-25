/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 09:03:18 by mtraball          #+#    #+#             */
/*   Updated: 2020/10/28 12:29:52 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcpy(char *dest, char *src)
{
	int iterator;

	iterator = 0;
	while (*(src + iterator) != 0)
	{
		*(dest + iterator) = *(src + iterator);
		iterator++;
	}
	*(dest + iterator) = 0;
	return (dest);
}
