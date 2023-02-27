/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:04:46 by tyajai            #+#    #+#             */
/*   Updated: 2023/02/17 18:04:49 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	s = src;
	d = dst;

	if (s < d)
	{
		s += len;
		d += len;
		while (len--)
		{
			*--d = *--s;
		}
	}
	else
	{
		ft_memcpy(dst,src,len);
	}
	return (dst);
}
