/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:20:57 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/20 15:21:44 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	i;

	a = 0;
	b = 0;
	i = 0;
	while (dest[a])
		a++;
	while (src[b])
		b++;
	if (size <= a)
		return (b + size);
	while (src[i] && (a + i) < (size - 1))
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (b + a);
}
/*
int	main(void)
{
	printf("%d\n",ft_strlcat("lalalgggga", "pipiggggpi", 7));
}
*/
