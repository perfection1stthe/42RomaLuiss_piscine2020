/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:29:42 by mtraball          #+#    #+#             */
/*   Updated: 2020/10/29 12:30:06 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int i)
{
	if (i < 0)
		return (-1);
	if (i < 2)
		return (i);
	return (ft_fibonacci(i - 2) + ft_fibonacci(i - 1));
}
