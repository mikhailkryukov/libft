/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:58:03 by mkryukov          #+#    #+#             */
/*   Updated: 2018/12/11 11:24:53 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(1 + ft_strlen((char*)s1) + (int)n));

	i = 0;
	while (*s1 != '\0')
	{
		str[i] = *s1;
		s1++;
		i++;
	}

	while ((int)n >= 0)
	{
		str[i] = *s2;
		s2++;
		i++;
		n--;
	}

	str[i] = '\0';

	return (str);
}
