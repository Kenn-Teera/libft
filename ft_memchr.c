/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:51:36 by tyajai            #+#    #+#             */
/*   Updated: 2023/02/20 17:51:38 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char		*s;

	s = (char *)str;
	while (n--)
	{
		if (*s == c)
		{
			return ((void *)s);
		}
		s++;
	}
	return (0);
}
