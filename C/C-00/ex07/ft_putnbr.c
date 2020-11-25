/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icolavol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 07:54:52 by icolavol          #+#    #+#             */
/*   Updated: 2020/10/28 08:37:25 by icolavol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char c;
	unsigned num;

	num = nb;

	if (nb < 0)
	{
		c = '-';
		write(1, &c, 1);
		num  = -nb;
	}

	c = '0';
	if (num >= 10)
	{
		ft_putnbr(num/10);
		ft_putnbr(num%10);
	}
	else
	{
		c += num;
		ft_putchar(c);
	}
}

int main()
{
int n;

n = 12345;
ft_putnbr(n);
ft_putchar('\n');

n = -2147483648;
ft_putnbr(n);
ft_putchar('\n');
n = 1988;
ft_putnbr(n);
ft_putchar('\n');
n = -1988;
ft_putnbr(n);
ft_putchar('\n');
n = 2147483647;
ft_putnbr(n);
ft_putchar('\n');
}
