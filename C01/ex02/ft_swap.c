/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 09:27:32 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/07 11:34:32 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main()
{
	int x;
	int y;

	x = 3;
	y = 4;

	printf("%d et %d c'est avant ", x, y);

	ft_swap(&x, &y);

	printf("%d et %d c'est avant ", x, y);

}
*/
