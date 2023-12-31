/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:33:39 by taimai            #+#    #+#             */
/*   Updated: 2023/09/29 21:00:02 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')
		|| ('0' <= c && c <= '9'))
	{
		return (1);
	}	
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum(' '));
// 	return (0);
// }
