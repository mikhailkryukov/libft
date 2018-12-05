/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:58:03 by mkryukov          #+#    #+#             */
/*   Updated: 2018/12/04 15:12:32 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <string.h>

char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*strchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
int		ft_strlen(char *str);


#endif
