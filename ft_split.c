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

static	int	count_word(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (s[i+1] == c)
			{
				count++;
			}
		}
		i++;
		s++;
	}
	return count;
	
}

char	**ft_split(char const *s, char c)
{
	int a = count_word(*s, c);
	return ;
}

int main()
{
	char s = "sadfgasfd";
	int a = count_word(s,a);
	printf("a : \n",a);
	return 0;
}
