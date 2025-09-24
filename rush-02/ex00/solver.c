/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:01:29 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/21 20:20:04 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

void	ft_solve(int matr)
{
	ft_convert_to_word();
	ft_separator();
}

void    ft_triplet(int nb, int nb_size)
{
	int	**matr;
	int	i;

	i = 0;
	matr = malloc(sizeof(int) * nb_size))
	while (nb >= 1)
	{
        	ft_store_in_tab(matr[i], nb % 1000);
        	ft_triplet(nb / 1000);
        	i++;
	}
}

char ft_number_to_word(char *str)
{
	char w_str;

	if (!(ft_is_number_valid(str)))
	{
		ft_triplet(ft_atoi(str, strlen(nb)));
	}
	return (0);
}
