/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 19:56:50 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/21 20:07:15 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

void	ft_store_in_tab(int **matr, int nb)
{
	// TODO : ranger les nombres dans une liste de n taille pour ensuite le trié
}

void    ft_sort_tab(int **matr, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = *matr[i];
		*matr[i] = *matr[j];
		*matr[j] = temp;
		i++;
		j--;
	}
}
