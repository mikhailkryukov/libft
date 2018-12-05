/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:58:03 by mkryukov          #+#    #+#             */
/*   Updated: 2018/12/03 19:53:02 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		if (s1[i] < s2[i])
			return ((s2[i] - s1[i]) * -1);
		else if (s1[i] > s2[i])
			return ((s2[i] - s1[i]) * -1);
		i++;
	}

	return (0);
}

int	main(void)
{
	printf("%d\n", ft_strncmp("te1st", "test", 3));
	printf("%d", strncmp("te1st", "test", 3));
	return (0);
}
