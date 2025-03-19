/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 01:26:34 by iait-bou          #+#    #+#             */
/*   Updated: 2024/01/10 04:39:11 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lend;
	size_t	lens;

	if (dest == NULL && size == 0)
		return (ft_strlen(src));
	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	if (size == 0 || size <= lend)
		return (lens + size);
	j = lend + lens;
	i = 0;
	while (src[i] != '\0' && lend < size - 1)
	{
		dest[lend] = src[i];
		i++;
		lend++;
	}
	dest[lend] = '\0';
	return (j);
}
