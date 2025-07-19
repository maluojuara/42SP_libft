/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:49:45 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 16:51:03 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_memset(void)
{
	char	*function_name = "ft_memset";
	printf("\033[1m%s:\033[0m\n\n", function_name);

	if (!norm_error(function_name))
	{
		char buffer1[] = "abcdefghi";
		char buffer2[] = "abcdefghi";
		assert_equal_mem("filling 3 bytes with 'x'", ft_memset(buffer1, 'x', 3), memset(buffer2, 'x', 3), 3);

		char buffer3[] = "abcdefghi";
		char buffer4[] = "abcdefghi";
		assert_equal_mem("filling 0 bytes", ft_memset(buffer3, 42, (size_t)0), memset(buffer4, 42, (size_t)0), 0);

		char buffer5[] = "";
		char buffer6[] = "abcdefghi";
		assert_equal_mem("testing empty buffer", ft_memset(buffer5, 89, (size_t)0), memset(buffer6, 89, (size_t)0), 0);

		char buffer7[] = "abcdefghi";
		char buffer8[] = "abcdefghi";
		assert_equal_mem("filling entire buffer", ft_memset(buffer7, '-', 10), memset(buffer8, '-', 10), 10);
	}

	printf("-------------------------------\n");
}
