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
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	total_len;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	total_len = len_dst + len_src;
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	ft_memcpy(dst + len_dst, src, dstsize - len_dst -1);
	dst[len_dst + (dstsize - len_dst -1)] = '\0';
	return (total_len);
}
/*
int main() {
    char dst[20] = "Hello, ";
    char *src = "world!";
    size_t size = sizeof(dst);
    size_t result = ft_strlcat(dst, src, size);
    printf("dst: %s\n", dst);
    printf("result: %zu\n", result);
    return 0;
}
*/