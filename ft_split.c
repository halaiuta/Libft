/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuhara <iuhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 07:50:32 by iuhara            #+#    #+#             */
/*   Updated: 2024/06/09 16:03:06 by iuhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strndup(char *s, int start, int end)
{
	char	*dest;
	int		size;
	int		i;

	size = end - start + 1;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_freeall(char **result, int i)
{
	while (i > 0)
	{
		i--;
		free(result[i]);
	}
	free(result);
	result = NULL;
}

void	split_set(char **alldest, char *s, char c)
{
	int	i;
	int	count;
	int	start;

	i = 0;
	count = 0;
	start = 0;
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			start = i;
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
		{
			alldest[count] = ft_strndup(s, start, i);
			if (!alldest[count])
			{
				ft_freeall(alldest, count);
				return ;
			}
			count++;
		}
		i++;
	}
	alldest[count] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**alldest;
	int		words_count;

	if (!s)
		return (NULL);
	words_count = count_words(s, c);
	alldest = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!alldest)
		return (NULL);
	split_set(alldest, (char *)s, c);
	return (alldest);
}
