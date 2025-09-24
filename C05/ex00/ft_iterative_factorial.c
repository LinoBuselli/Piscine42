/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 23:08:34 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/17 04:02:44 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
/*
int main()
{
		int nbr;
		nbr = 5;
		printf("facto de %d\n", nbr);
		printf("factorielle: %d", ft_iterative_factorial(nbr));
	    return(0);
}
*/
