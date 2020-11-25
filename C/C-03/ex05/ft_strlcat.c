/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 09:11:48 by mtraball          #+#    #+#             */
/*   Updated: 2020/10/29 11:59:37 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_str_length_fast(char *dest)
{
	unsigned int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	return (count);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	char				*dst;
	char				*src_start;
	unsigned int		dst_lengh;
	unsigned int		remaing;

	dst = dest;
	src_start = src;
	remaing = size;
	while (remaing-- != 0 && *dst != '\0')
		dst++;
	dst_lengh = dst - dest;
	remaing = size - dst_lengh;
	if (remaing == 0)
		return (dst_lengh + ft_str_length_fast(src));
	while (*src != '\0')
	{
		if (remaing > 1)
		{
			*dst++ = *src;
			remaing--;
		}
	}
	*dst = '\0';
	return (dst_lengh + (src - src_start));
}
