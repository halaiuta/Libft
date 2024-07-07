/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuhara <iuhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:47:32 by iuhara            #+#    #+#             */
/*   Updated: 2024/07/03 13:59:17 by iuhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	size_t				i;

	src = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*s = "Hello, world!";
// 	int			c;
// 	size_t		n;
// 	void		*result_ft;
// 	void		*result_libc;

// 	c = 'b';
// 	n = strlen(s);
// 	// ft_memchr 関数を使って 'o' を検索
// 	result_ft = ft_memchr(s, c, n);
// 	if (result_ft != NULL)
// 	{
// 		printf("ft_memchr: Found '%c' at index %ld\n", c,
// 			((const unsigned char *)result_ft - (const unsigned char *)s));
// 	}
// 	else
// 	{
// 		printf("ft_memchr: '%c' not found\n", c);
// 	}
// 	// memchr 関数を使って 'o' を検索
// 	result_libc = memchr(s, c, n);
// 	if (result_libc != NULL)
// 	{
// 		printf("memchr: Found '%c' at index %ld\n", c,
// 			((const unsigned char *)result_libc - (const unsigned char *)s));
// 	}
// 	else
// 	{
// 		printf("memchr: '%c' not found\n", c);
// 	}
// 	return (0);
// }
