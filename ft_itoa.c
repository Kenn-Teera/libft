/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:47:37 by tyajai            #+#    #+#             */
/*   Updated: 2023/03/01 18:47:41 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

static int num_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		nlen;
	char	*s;

	if (n == 0)
		return(ft_strdup("0"));
	if (n == -2147483648)
		return(ft_strdup("-2147483648"));
	nlen = num_len(n);
	s = malloc(nlen + 1);
	if (!s)
		return NULL;
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	s[nlen--] = '\0';
	while (n)
	{
		s[nlen] = (n % 10) + '0';
		n /= 10;
		nlen--;
	}
	return (s);
}
