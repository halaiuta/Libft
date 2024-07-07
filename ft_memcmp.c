/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuhara <iuhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:40:44 by iuhara            #+#    #+#             */
/*   Updated: 2024/04/22 05:36:51 by iuhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p;
	const unsigned char	*p2;
	size_t				i;

	i = 0;
	p = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (p[i] != p2[i])
			return (p[i] - p2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "hello world";
// 	char	s2[] = "hello sorld";

// 	printf("%d\n", ft_memcmp(s1, s2, 2));
// 	printf("%d\n", memcmp(s1, s2, 2));
// }
