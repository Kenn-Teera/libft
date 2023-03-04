/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:48:30 by tyajai            #+#    #+#             */
/*   Updated: 2023/03/01 18:48:32 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	**ft_split(char const *s, char c)
{
	//count word
	//malloc
	//free
	int	i;
	int	count;

	count = 0;
	i = 0;
	while(s[i])
	{
		if (s[i] == c)
		{
			count++;
		}
		i++;
	}
}
