/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:00:33 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 17:12:47 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_memcpy(void)
{
	char	*function_name = "ft_memcpy";
	printf("\033[1m%s:\033[0m\n\n", function_name);

	if (!norm_error(function_name))
	{
		char dest1[] = "abcdefgh";
		char src1[] = "zzzzzzzzzzzz";
		assert_equal_mem("copying 3 first bytes", ft_memcpy(dest1, src1, 3), memcpy(dest1, src1, 3), 3);

		char dest2[] = "abcdefgh";
		char src2[] = "zzzzzzzzzzzz";
		assert_equal_mem("copying 5 first bytes", ft_memcpy(dest2, src2, 5), memcpy(dest2, src2, 5), 5);

		char dest3[12] = "";
		char src3[] = "abcdefghi";
		assert_equal_mem("testing empty dest", ft_memcpy(dest3, src3, 4), memcpy(dest3, src3, 4), 4);

		char dest4[] = "abcdefghi";
		char src4[12] = "";
		assert_equal_mem("testing empty src", ft_memcpy(dest4, src4, 4), memcpy(dest4, src4, 4), 4);
	}

	printf("-------------------------------\n");
}