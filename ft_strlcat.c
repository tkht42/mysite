/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:25:53 by taimai            #+#    #+#             */
/*   Updated: 2023/09/30 12:30:20 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strlcat(char *dest, char *src)
{
	char	*keep;

	keep = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (keep);
}
