/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:48:47 by tyajai            #+#    #+#             */
/*   Updated: 2023/03/01 18:48:49 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*dest;

	if (!(s1))
		return (NULL);
	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = malloc(s1_len + s2_len + 1);
	if (dest == NULL)
		return (NULL);
	while (s1_len)
	{
		dest[i] = *s1++;
		s1_len--;
		i++;
	}
	while (s2_len)
	{
		dest[i] = *s2++;
		s2_len--;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
