/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:15:57 by mtraball          #+#    #+#             */
/*   Updated: 2020/10/29 12:20:36 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		factorial;
	int		i;

	if (nb < 0)
		return (0);
	i = 1;
	factorial = 1;
	while (i < nb + 1)
		factorial = factorial * i++;
	return (factorial);
}
