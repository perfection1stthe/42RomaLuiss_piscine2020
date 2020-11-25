/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 11:56:05 by mtraball          #+#    #+#             */
/*   Updated: 2020/10/26 14:16:11 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_combination(char a, char b, char y, char z)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(y);
	ft_putchar(z);
	if (b != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char y;
	char z;

	b = '0' - 1;
	while (b++ < '9')
	{
		a = b + 1;
		while (a++ <= '9')
		{
			y = a + 1;
			while (y++ <= '9')
			{
				z = y + 1;
				while (z++ <= '9')
					ft_combination(a, b, y, z);
			}
		}
	}
}
