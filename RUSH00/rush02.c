/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:34:17 by loboehm           #+#    #+#             */
/*   Updated: 2025/09/09 14:29:08 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

int	ft_write_line(int width)
{
	int	tempa;

	tempa = width - 2;
	ft_putchar('B');
	if (width == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	while (tempa != 0)
	{
		ft_putchar(' ');
		tempa--;
	}
	ft_putchar('B');
	ft_putchar('\n');
	return (0);
}

int	ft_write_header(int width)
{
	int	tempa;

	ft_putchar('A');
	if (width == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	tempa = width - 2;
	while (tempa != 0)
	{
		ft_putchar('B');
		tempa--;
	}
	ft_putchar('A');
	ft_putchar('\n');
	return (0);
}

int	ft_write_downer(int width)
{
	int	tempa;

	tempa = width - 2;
	ft_putchar('C');
	if (width == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	while (tempa != 0)
	{
		ft_putchar('B');
		tempa--;
	}
	ft_putchar('C');
	ft_putchar('\n');
	return (0);
}

int	rush(int x, int y)
{
	if (x <= 0 || y <= 0) // a longeur b hauteur
	{
		return (0);
	}
	ft_write_header(x);
	while (y - 2 > 0)
	{
		ft_write_line(x);
		y--;
	}
	if (y != 1)
	{
		ft_write_downer(x);
	}
	return (0);
}
