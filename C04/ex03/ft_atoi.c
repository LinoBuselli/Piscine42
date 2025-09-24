/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:52:14 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/22 11:17:34 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	nbr;
	int	negate;
	int	sum;

	sum = 0;
	negate = 1;
	nbr = 0;
	while (str[nbr] == ' ' || (str[nbr] >= 9 && str[nbr] <= 13))
	{
		nbr++;
	}
	while (str[nbr] == '-' || str[nbr] == '+')
	{
		if (str[nbr] == '-')
		{
			negate *= -1;
		}
		nbr++;
	}
	while (str[nbr] >= '0' && str[nbr] <= '9')
	{
		sum = (sum * 10) + (str[nbr] - '0');
		nbr++;
	}
	return (negate * sum);
}

/*
int	main()
{
	char tab[] = "   ---+--+1234ab567";
	printf("resultat: %d\n", ft_atoi(tab));
	printf("resultat1: %d\n", ft_atoi("-13"));
	printf("resultat2: %d\n", ft_atoi("\n +-+--+13"));
	printf("resultat3: %d\n", ft_atoi("--12"));
	return (0);
}
*/
