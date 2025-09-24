/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 03:41:23 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/17 05:17:15 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	if (power < 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		nb = nb * j;
		i++;
	}
	return (nb);
}

/*
int main()
{
	int nb;
	int pow;
	
	nb = 3;
	pow = 2;
	printf("nombre base:%d\n", nb);
	printf("nombre puissance:%d", ft_iterative_power(nb, pow));
}
*/
