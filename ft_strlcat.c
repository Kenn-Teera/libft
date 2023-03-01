/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:13:26 by tyajai            #+#    #+#             */
/*   Updated: 2023/02/19 20:13:28 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t dst_len;
	size_t total;
	size_t bytes_to_copy;
	
	if (dst == NULL && dstsize == 0)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if(dstsize < dst_len)
		return (dstsize + src_len);
	bytes_to_copy = dstsize - dst_len - 1;
    ft_memcpy(dst + dst_len, src, bytes_to_copy);
    dst[dst_len + bytes_to_copy] = '\0';
	total = src_len + dst_len;
    return (total);
		
}
 