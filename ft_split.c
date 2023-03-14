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

static	size_t	count_word(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return count;	
}

static char	**free_array(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return NULL;
}

static char	*cpy_word(char const *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s - len, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	word;
	char	**arr_str;
	
	if (!s)
		return NULL;
	word = count_word(s, c);
	arr_str = malloc(sizeof(char *) * (word + 1));
	if (!arr_str)
		return NULL;
	i = 0;
	arr_str[word] = NULL;
	while (i < word)
	{
		while (*s && *s == c)
			s++;
		arr_str[i] = cpy_word(s, c);
		if (!arr_str)
			return (free_array(arr_str,i));
		while (*s && *s != c) 
			s++;
		i++;
	}
	return (arr_str);
}

