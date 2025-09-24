/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:46:48 by ebrahima          #+#    #+#             */
/*   Updated: 2025/09/10 15:47:46 by ebrahima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			i++;
			j = 0;
			write(1, "\n", 1);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 2;
	while (i < argc - 1)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	ft_print_params(argc, argv);
	return (0);
}
