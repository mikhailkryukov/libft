/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:58:03 by mkryukov          #+#    #+#             */
/*   Updated: 2018/12/04 13:43:52 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int i;
	int j;
	int len;

	i = 0;

	if (needle[i] == '\0')
		return ((char*)(haystack));
	len = ft_strlen((char*)(needle));
	while (i <= n)
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				if (j == n)
					return ((char*)(haystack + i - len + 1));
				i++;
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("%s\n", ft_strnstr("wertyu", "wer", 3));
	printf("%s", strnstr("wertyu", "wer", 3));
	return (0);
}
