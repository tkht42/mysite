/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:02:12 by taimai            #+#    #+#             */
/*   Updated: 2023/09/30 11:49:03 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putnbr(int nb);
int		ft_str_is_numeric(char *str);
void	add(int a, int b);
void	divide(int a, int b);
void	multiply(int a, int b);
void	subtract(int a, int b);
void	modulo(int a, int b);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
#endif
