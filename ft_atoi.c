/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuhara <iuhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:55:26 by iuhara            #+#    #+#             */
/*   Updated: 2024/06/09 15:17:01 by iuhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = ft_isspace(str);
	result = 0;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (ft_isdigit(str[i]))
	{
		if (result > result * 10 + str[i] - '0')
		{
			if (sign == 1)
				return ((int)LONG_MAX);
			else
				return ((int)LONG_MIN);
		}
		result = (result * 10) + (str[i++] - '0');
	}
	return (result * sign);
}

// void	test_atoi(const char *str)
// {
// 	int	result_ft;
// 	int	result_sys;

// 	result_ft = ft_atoi(str);
// 	result_sys = atoi(str);
// 	printf("Input string: %s\n", str);
// 	printf("ft_atoi result: %d\n", result_ft);
// 	printf("atoi result: %d\n", result_sys);
// 	if (result_ft == result_sys)
// 		printf("Result: PASS\n");
// 	else
// 		printf("Result: FAIL\n");
// 	printf("\n");
// }

// int	main(void)
// {
// 	printf("=== Test Cases for ft_atoi and atoi ===\n\n");
// 	// Test cases with various inputs
// 	test_atoi("123");
// 	test_atoi("-456");
// 	test_atoi("0");
// 	test_atoi("   789");
// 	test_atoi("+-42");
// 	test_atoi("123abc");
// 	test_atoi("abc123");
// 	test_atoi("");
// 	test_atoi("2147483647");           // INT_MAX
// 	test_atoi("-2147483648");          // INT_MIN
// 	test_atoi("2147483648");           // Out of range
// 	test_atoi("-2147483649");          // Out of range
// 	test_atoi("9223372036854775807");  // LONG_MAX
// 	test_atoi("-9223372036854775808"); // LONG_MIN
// 	test_atoi("9223372036854775808");  // Out of range
// 	test_atoi("-9223372036854775809"); // Out of range
// 	return (0);
// }
