/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 19:23:31 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/14 19:32:01 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_row(int grid[4][4], int row_index)
{
	int	j;

	j = 0;
	ft_putchar('L');
	ft_putchar(row_index + '0');
	ft_putchar(':');
	ft_putchar(' ');
	while (j < 4)
	{
		ft_putchar(grid[row_index][j] + '0');
		if (j < 3)
			ft_putchar(' ');
		j++;
	}
	ft_putchar('\n');
}
