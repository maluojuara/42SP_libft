/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:14:05 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 13:38:34 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isalpha(void)
{
	char	*function_name = "ft_isalpha";
	printf("\033[1m%s:\033[0m\n\n", function_name);

	if (!norm_error(function_name))
	{
		assert_equal_int("testing char 'm'", ft_isalpha('m'), 1);
		assert_equal_int("testing char 'M'", ft_isalpha('M'), 1);
		assert_equal_int("testing space (' ')", ft_isalpha(' '), 0);
		assert_equal_int("testing char '9'", ft_isalpha('9'), 0);
		assert_equal_int("testing null", ft_isalpha('\0'), 0);
		assert_equal_int("testing char '$'", ft_isalpha('$'), 0);
		assert_equal_int("testing newline ('\\n')", ft_isalpha('\n'), 0);
		assert_equal_int("testing negative number", ft_isalpha(-3), 0);
	}
	printf("-------------------------------\n");
}
