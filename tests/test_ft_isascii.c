/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:50:42 by maluojuara        #+#    #+#             */
/*   Updated: 2025/07/19 13:40:26 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isascii(void)
{
	char	*function_name = "ft_isascii";
	printf("\033[1m\n%s:\033[0m\n", function_name);

	if (!norm_error(function_name))
	{
		assert_equal_int("testing negative number", ft_isascii(-23), 0);
		assert_equal_int("testing positive number in ascii table", ft_isascii(21), 1);
		assert_equal_int("testing space (' ')", ft_isascii(' '), 1);
		assert_equal_int("testing positive number outside ascii table", ft_isascii(9827), 0);
		assert_equal_int("testing null", ft_isascii('\0'), 1);
		assert_equal_int("testing char '$'", ft_isascii('$'), 1);
		assert_equal_int("testing newline ('\\n')", ft_isascii('\n'), 1);
	}
	printf("-------------------------------\n");
}
