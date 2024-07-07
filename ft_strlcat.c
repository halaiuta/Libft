/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuhara <iuhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:10:44 by iuhara            #+#    #+#             */
/*   Updated: 2024/07/03 14:04:18 by iuhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && j < (dstsize - i - 1) && dstsize - i != 0)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}

// int	main(void)
// {
// 	char	src[] = "hello world";
// 	char	dest1[15] = "!!!!!";
// 	char	dest2[15] = "!!!!!";
// 	size_t	ptr1;
// 	size_t	ptr2;

// 	// 本家の strlcat 関数の挙動を確認
// 	ptr1 = strlcat(dest1, src, 10);
// 	printf("strlcat: destの値: %s, 戻り値の値: %zu\n", dest1, ptr1);
// 	// 自作の ft_strlcat 関数の挙動を確認
// 	ptr2 = ft_strlcat(dest2, src, 10);
// 	printf("ft_strlcat: destの値: %s, 戻り値の値: %zu\n", dest2, ptr2);
// 	return (0);
// }
