/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 05:33:58 by iait-bou          #+#    #+#             */
/*   Updated: 2023/12/24 05:34:03 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &(s[i]));
		i++;
	}
}
// void touper(unsigned int i, char *c)
// {
//         if(*c <='z' &&  *c >='a')
//         *c -= 32;
// }
// #include <stdio.h>
// int  main(void)
// {
//  char    str[] = "Hello,world!";
//  ft_striteri(str, touper);
//  printf(" %s\n", str);

//  return (0);
// }