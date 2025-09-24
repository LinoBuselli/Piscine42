/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 19:55:11 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/21 20:19:35 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int i = 0;
    int res = 0;

	while ('0' <= str[i] && str[i] <= '9')
	{
		res = res*10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int ft_is_number_valid(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
        	if ((!('0' <= str[i] && str[i] <= '9')))
        		return (1);
        	i++;
	}
	return (0);
}
