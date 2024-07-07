/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuhara <iuhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:58:49 by iuhara            #+#    #+#             */
/*   Updated: 2024/05/15 23:27:27 by iuhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size && SIZE_MAX / size < count)
		return (NULL);
	ptr = (void *)malloc(sizeof(char) * (count * size));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	int		*arr1;
// 	int		*arr2;
// 	size_t	huge_size;
// 	void	*ptr1;
// 	void	*ptr2;

// 	// 整数型の配列をcallocで確保
// 	arr1 = calloc(10, sizeof(int));
// 	arr2 = ft_calloc(10, sizeof(int));
// 	printf("calloc で確保した配列:\n");
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d ", arr1[i]); // 全ての要素が0で初期化されているはず
// 	}
// 	printf("\n");
// 	printf("ft_calloc で確保した配列:\n");
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d ", arr2[i]); // 全ての要素が0で初期化されているはず
// 	}
// 	printf("\n");
// 	// メモリ不足をシミュレート
// 	huge_size = (size_t)-1;
// 	ptr1 = calloc(huge_size, sizeof(int));
// 	ptr2 = ft_calloc(huge_size, sizeof(int));
// 	if (ptr1 == NULL)
// 		printf("calloc failed (memory exhausted)\n");
// 	if (ptr2 == NULL)
// 		printf("ft_calloc failed (memory exhausted)\n");
// 	free(arr1);
// 	free(arr2);
// 	return (0);
// }
