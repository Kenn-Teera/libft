/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:09:12 by tyajai            #+#    #+#             */
/*   Updated: 2023/02/16 13:09:16 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	unsigned char	*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	i = 0;

	if((d == NULL) && (s == NULL))
		return (NULL);
	while (i < n)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	return (dst);
}
