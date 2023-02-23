/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:15:31 by tyajai            #+#    #+#             */
/*   Updated: 2023/02/16 11:15:34 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	while (n--)
	{
		*(char *)str = c;
		str++;
	}
	return (str);
}
//note it come with void and int 
//so u need to change it to char for change alphabet na
//and size_t have unsigned so u need to change if u do with n
