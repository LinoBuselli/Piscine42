/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 18:02:58 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/24 19:07:47 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i;
	char *dest;
	i = 0;
	
	dest = malloc(sizeof(char) * (dest + 1));
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest = '\0';
	return(dest);
}

int	main()
{
	char src[] = "bouilloire";
	char dest[] = "";

	printf("%c", ft_strdup(src, dest));
}
