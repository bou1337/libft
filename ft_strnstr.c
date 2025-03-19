/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 01:47:16 by iait-bou          #+#    #+#             */
/*   Updated: 2024/01/10 04:37:39 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *fin, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char *)str;
	i = 0;
	if (fin[0] == '\0')
		return ((char *)str);
	while (s[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && s[i + j] == fin[j] && fin[j] != '\0')
			j++;
		if (fin[j] == '\0')
			return (&s[i]);
		i++;
	}
	return (0);
}
