/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:06:57 by tyajai            #+#    #+#             */
/*   Updated: 2023/02/20 19:07:02 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	if ((count == SIZE_MAX) || (size == SIZE_MAX))
	{
		return (0);
	}
	ptr = malloc (count * size);
	if (ptr != NULL)
	{
		ft_memset (ptr, 0, count * size);
	}
	return (ptr);
}
