/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:54:15 by lmorgado          #+#    #+#             */
/*   Updated: 2025/09/24 16:54:18 by lmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	x_size(char **matrix)
{
	int	size;

	size = 0;
	while (matrix[size])
		size++;
	return (size);
}

int	y_size(char **matrix)
{
	int	size;

	size = 0;
	while (matrix[0][size])
		size++;
	return (size);
}
