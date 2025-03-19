/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 05:35:50 by iait-bou          #+#    #+#             */
/*   Updated: 2024/01/10 04:29:20 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	a;
	size_t	b;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && check(s1[i], set) == 1)
		i++;
	while (j > i && check(s1[j - 1], set) == 1)
		j--;
	a = j - i;
	p = (char *)malloc(a + 1);
	if (p == NULL)
		return (NULL);
	b = 0;
	while (i < j)
		p[b++] = s1[i++];
	p[a] = '\0';
	return (p);
}
