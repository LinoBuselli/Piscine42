/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 19:57:50 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/22 14:54:44 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

void	ft_separator(int nb)
{
	ft_convert_to_word(nb, 0);
}

void	ft_write_word(int nb, int *tab)
{
	if (nb >= 100)
	{
		int hundred = nb / 100;
		write(1, tab[hundred][2], strlen(tab[hundred][2]));
		write(1, tab[100][2], 4);
		nb = nb % 100;
	}
	else if (nb >= 20)
	{
		int tens = nb / 10 * 10;
		write(1, tab[tens][2], strlen(tab[tens][2]));
		nb = nb % 10;
	}
	else if (10 <= nb <= 20)
	{
		write(1, tab[nb][2], strlen(tab[nb][2]));
	}
	else
		write(1, tab[nb][2], strlen(tab[nb][2]));
}

void    ft_convert_to_word(int nb, int arg)
{
	int	dict;
	int	bytesRead;
	char	tab[100000];

	dict = open("numbers.dict",  O_RDONLY);
	bytesRead = read(fd, tab, sizeof(tab));

	if (dict == -1)
	{
		write(1, "Error Opening File", 18);
		return (1);
	}
	else if (arg == 0)
	{
		ft_write_word(nb, dict);
	}
	else
	{
		int	row;

		row = 28;
		write(1, dict[row + nb][2], strlen(dict[nb][2]);
	}
}
