/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:58:03 by mkryukov          #+#    #+#             */
/*   Updated: 2018/12/04 12:32:44 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int len;

	i = 0;

	if (needle[i] == '\0')
		return ((char*)(haystack));
	len = ft_strlen((char*)(needle));
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				if (j == len - 1)
					return ((char*)(haystack + i - len + 1));
				i++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
