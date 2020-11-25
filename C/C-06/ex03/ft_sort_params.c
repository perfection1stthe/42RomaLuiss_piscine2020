/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:46:16 by mtraball          #+#    #+#             */
/*   Updated: 2020/10/31 17:56:15 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

void	ft_str_sort(char **arr, int size, int offset)
{
	int		i;
	bool	swapped;

	i = offset;
	while (true)
	{
		i = offset;
		swapped = false;
		while (i < size)
		{
			if (ft_strcmp(arr[i], arr[i + 1]) > 0)
			{
				ft_swap(&arr[i], &arr[i + 1]);
				swapped = true;
			}
			i++;
		}
		if (!swapped)
			break ;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc > 2)
		ft_str_sort(argv, argc - 1, 1);
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
}
