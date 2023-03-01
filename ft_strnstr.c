/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:13:43 by tyajai            #+#    #+#             */
/*   Updated: 2023/02/19 20:13:45 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	char	*h;
	
	if ((haystack == NULL) && (len == 0))
		return (0);
	h = (char *) haystack;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return (h);
	while (*haystack && (len >= needle_len))
	{
        if ((*haystack == *needle) && (ft_memcmp(haystack, needle, needle_len) == 0))
		{
            return (char*)haystack;
        }
		haystack++;
		len--;
	}
	return (0);
}
