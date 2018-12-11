/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:58:03 by mkryukov          #+#    #+#             */
/*   Updated: 2018/12/11 11:24:00 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(1 + ft_strlen((char*)dst) + dstsize));

	i = 0;
	while (dst != '\0')
	{
		str[i] = *dst;
		dst++;
		i++;
	}

	while ((int)dstsize >= 0)
	{
		str[i] = *src;
		src++;
		i++;
		dstsize--;
	}

	str[i] = '\0';

	return (*str);
}
