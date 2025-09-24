/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:41:14 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/21 20:41:39 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"
int	main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "Error: one argument expected\n", 29);
        return (1);
    }
    ft_number_to_word(argv[1]);
    return (0);
}
