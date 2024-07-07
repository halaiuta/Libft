/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuhara <iuhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:16:02 by iuhara            #+#    #+#             */
/*   Updated: 2024/05/15 21:44:18 by iuhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

// int	main(void)
// {
// 	char	src[] = "Hello, world!";
// 	char	dst1[20];
// 	char	dst2[20];

// 	size_t len1, len2;
// 	len1 = ft_strlcpy(dst1, src, sizeof(dst1));
// 	len2 = strlcpy(dst2, src, sizeof(dst2));
// 	printf("Original: %s\n", src);
// 	printf("Custom strlcpy: %s (length: %zu)\n", dst1, len1);
// 	printf("System strlcpy: %s (length: %zu)\n", dst2, len2);
// 	if (len1 == len2 && strcmp(dst1, dst2) == 0)
// 	{
// 		printf("Both strings are equal.\n");
// 	}
// 	else
// 	{
// 		printf("Strings are not equal.\n");
// 	}
// 	return (0);
// }
