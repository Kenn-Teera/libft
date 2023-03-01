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
	size_t cpy_len;
	
	if (dst == NULL && dstsize == 0)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	cpy_len = dstsize - dst_len - 1;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	if (src_len < cpy_len) {
        ft_memcpy(dst + dst_len, src, src_len + 1);
    } else {
        ft_memcpy(dst + dst_len, src, cpy_len);
        dst[dstsize - 1] = '\0';
    }
	total = src_len + dst_len;
    return (total);
		
}
 