/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 02:38:07 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/17 04:08:21 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb == 1)
	{
		return (nb);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main()
{
	int nbr;

	nbr = 5;
	printf("avant facto: %d\n", nbr);
	printf("factorielle de: %d", ft_recursive_factorial(nbr));

}
*/
