/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 05:11:54 by iait-bou          #+#    #+#             */
/*   Updated: 2024/01/10 04:49:21 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t s)
{
	size_t			n;
	unsigned char	*str;

	str = (unsigned char *)ptr;
	n = 0;
	while (n < s)
	{
		str[n] = (unsigned char)c;
		n++;
	}
	return (ptr);
}
