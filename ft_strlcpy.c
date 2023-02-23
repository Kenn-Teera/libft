/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:52:31 by tyajai            #+#    #+#             */
/*   Updated: 2023/02/17 18:52:33 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_s;

	i = 0;
	len_s = ft_strlen(src);
	if (dstsize < 1)
		return (len_s);
	while (src[i] != '\0' && i != dstsize - 1)
	{
			dst[i] = src[i];
			i++;
	}
	dst[i] = '\0';
	return (len_s);
}
