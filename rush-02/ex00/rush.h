/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:10:51 by lbuselli          #+#    #+#             */
/*   Updated: 2025/09/21 20:18:07 by lbuselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int	ft_strlen(char *str);
int	ft_atoi(char *str);
int	ft_is_number_valid(char *str);
void		ft_store_in_tab(int **matr, int nb);
void		ft_sort_tab(int **matr, int size);
void		ft_separator(int nb);
void		ft_write_word(int nb, int *tab);
void		ft_create_dict(void);
void		ft_convert_to_word(int nb, int arg);
void		ft_solve(int matr);
void		ft_triplet(int nb, int nb_size);
char		ft_number_to_word(char *str);

#endif
