/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:32:14 by tyajai            #+#    #+#             */
/*   Updated: 2023/02/18 21:32:17 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			p = (char *)(str + i);
		}
		i++;
	}
	if (c == '\0')
	{
		p = (char *)(str + strlen(str));
	}
	return (p);
}
