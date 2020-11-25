/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:56:37 by mtraball          #+#    #+#             */
/*   Updated: 2020/10/26 16:33:57 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_rev_int_tab(int *tab, int size)
{
	int iterator;
	int swap;

	iterator = 0;
	while (iterator < size)
	{
		swap = tab[iterator];
		tab[iterator] = tab[size - 1];
		tab[size - 1] = swap;
		iterator++;
		size--;
	}
}
