/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:49:14 by tyajai            #+#    #+#             */
/*   Updated: 2023/03/01 18:49:16 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t  start;
	size_t	last;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	last = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) != NULL)
	{
		if (start == ft_strlen(s1))
			return (ft_strdup(""));
        start++;
	}
	while (ft_strchr(set,s1[last]) != NULL)
	{
		last--;
	}
	return (ft_substr(s1,start,(last - start + 1)));
}
