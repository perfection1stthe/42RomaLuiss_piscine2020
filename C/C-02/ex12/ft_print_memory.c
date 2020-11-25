/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:28:00 by mtraball          #+#    #+#             */
/*   Updated: 2020/10/28 12:40:11 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

#define MAX_PAGE_SIZE 16

void	ft_buffer_number(int number, int radix, int buffer[], int i)
{
	if (number > radix - 1)
		ft_buffer_number(number / radix, radix, buffer, i + 1);
	buffer[i] = number % radix;
}

void	ft_write_hex(unsigned int number, int radix, int char_count)
{
	int	buffer[MAX_PAGE_SIZE + 1];
	int	i;

	i = -1;
	while (i++ < MAX_PAGE_SIZE)
		buffer[i] = 0;
	ft_buffer_number(number, radix, buffer, 0);
	i = -1;
	while (i++ < char_count)
		write(1, &"0123456789abcdefgh"[buffer[char_count - i]], 1);
}

void	ft_write_safe_char(char *c)
{
	if (*c >= ' ' && *c != 127)
		write(1, c, 1);
	else
		write(1, &".", 1);
}

void	ft_print_memory_at(void *start_addr, unsigned int size, char *curr_addr)
{
	int i;

	ft_write_hex((unsigned int)curr_addr, 16, MAX_PAGE_SIZE);
	write(1, &": ", 2);
	i = 0;
	while (i++ < 16)
	{
		if (start_addr + size <= (void *)(curr_addr + i - 1))
			write(1, &"  ", 2);
		else
			ft_write_hex((unsigned char)*(curr_addr + i - 1), 16, 1);
		if (i % 2 == 0)
			write(1, &" ", 1);
	}
	i = 0;
	while (i++ < 16)
		if (start_addr + size > (void *)(curr_addr + i - 1))
			ft_write_safe_char((char *)curr_addr + i - 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*curr_addr;

	curr_addr = (char *)addr;
	while ((void *)curr_addr < (addr + size))
	{
		ft_print_memory_at(addr, size, curr_addr);
		write(1, &"\n", 1);
		curr_addr += 16;
	}
	return (addr);
}
