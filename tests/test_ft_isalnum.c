/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:25:44 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 16:58:19 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isalnum(void)
{
	char	*function_name = "ft_isalnum";
	printf("\033[1m%s:\033[0m\n\n", function_name);

	if (!norm_error(function_name))
	{
		assert_equal_int("testing char 'm'", ft_isalnum('m'), 1);
		assert_equal_int("testing char 'M'", ft_isalnum('M'), 1);
		assert_equal_int("testing space (' ')", ft_isalnum(' '), 0);
		assert_equal_int("testing char '9'", ft_isalnum('9'), 1);
		assert_equal_int("testing null", ft_isalnum('\0'), 0);
		assert_equal_int("testing char '$'", ft_isalnum('$'), 0);
		assert_equal_int("testing newline ('\\n')", ft_isalnum('\n'), 0);
		assert_equal_int("testing negative number", ft_isalnum(-3), 0);
		assert_equal_int("testing positive big number", ft_isalnum(1024), 0);
	}
	printf("-------------------------------\n");
}
