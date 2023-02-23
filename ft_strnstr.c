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
	size_t	i;
	size_t	len_nle;

	len_nle = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *) haystack);
	i = 0;
	while (i <= len - len_nle)
	{
		if (ft_strncmp (&haystack[i], needle, len_nle) == 0)
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
