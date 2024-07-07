/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuhara <iuhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:08:57 by iuhara            #+#    #+#             */
/*   Updated: 2024/04/22 13:19:27 by iuhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(s1);
	dst = (char *)malloc(sizeof(char) * (srclen + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// int	main(void)
// {
// 	const char	*original_str = "Hello, world!";
// 	char		*str_dup;
// 	char		*ft_str_dup;

// 	// strdup を使った場合
// 	str_dup = strdup(original_str);
// 	printf("strdup: %s\n", str_dup);
// 	free(str_dup); // メモリリークを避けるために解放する
// 	// ft_strdup を使った場合
// 	ft_str_dup = ft_strdup(original_str);
// 	printf("ft_strdup: %s\n", ft_str_dup);
// 	free(ft_str_dup); // メモリリークを避けるために解放する
// 	return (0);
// }
