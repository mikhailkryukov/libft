/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:58:03 by mkryukov          #+#    #+#             */
/*   Updated: 2018/12/04 16:09:43 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	char *str;

	str = (char *)malloc(sizeof(1 + ft_strlen((char*)s1) + ft_strlen((char*)s2)));

	i = 0;
	while (*s1 != '\0')
	{
		str[i] = *s1;
		s1++;
	}

	while (*s2 != '\0')
	{
		str[i] = *s2;
		s2++;
	}

	str[i] = '\0';

	return (str);
}

int		main(void)
{


	printf("%s\n", ft_strcat("my ", "test"));
	printf("%s", strcat("my ", "test"));
	return (0);
}
