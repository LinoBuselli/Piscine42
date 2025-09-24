/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 20:55:39 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/13 16:25:15 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main()
{

	char ss1[] = "GFG"; 
	char ss2[] = "GfZ"; // pas egale PREMIERE if state

	char ss3[] = "GFG";
	char ss4[] = "GFG"; //pareil SECOND if state
	
	char ss5[] = "GFGHJ";
	char ss6[] = "dJn";

	printf("pas egale: %d", ft_strcmp(ss1, ss2));
	
	printf("pareil: %d", ft_strcmp(ss3, ss4));

	printf("inferieur a %d", ft_strcmp(ss5, ss6));
	return (0);
}
*/
