/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:25:43 by mtraball          #+#    #+#             */
/*   Updated: 2020/10/28 12:43:26 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int			i;
	char		charptr;

	i = 0;
	while (1)
	{
		charptr = str[i];
		if (charptr == 0)
			break ;
		if (charptr >= 'A' && charptr <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
