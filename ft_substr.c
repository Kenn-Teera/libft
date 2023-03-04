/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:49:21 by tyajai            #+#    #+#             */
/*   Updated: 2023/03/01 18:49:23 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*dest;

	if (!(s))
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (len >= (s_len - start))
		len = s_len - start;
	if (start > s_len)
		return (ft_strdup(""));
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	while (len--)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
