/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:58:03 by mkryukov          #+#    #+#             */
/*   Updated: 2018/12/02 20:43:46 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		rez;
	int		i;
	char	sign;

	i = 0;
	rez = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '0' + 9)
	{
		rez = rez * 10 + (str[i] - '0');
		i++;
	}
	return (rez * sign);
}
