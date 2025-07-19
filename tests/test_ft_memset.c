/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:49:45 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 13:50:13 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_memset(void)
{
	char	*function_name = "ft_memset";
	printf("\033[1m%s:\033[0m\n\n", function_name);

	if (!norm_error(function_name))
	{
		assert_equal_int("testing char 'm'", ft_isdigit('m'), 0);
		assert_equal_int("testing char 'M'", ft_isdigit('M'), 0);
		assert_equal_int("testing space (' ')", ft_isdigit(' '), 0);
		assert_equal_int("testing char '9'", ft_isdigit('9'), 1);
		assert_equal_int("testing char '0'", ft_isdigit('0'), 1);
		assert_equal_int("testing null", ft_isdigit('\0'), 0);
		assert_equal_int("testing char '$'", ft_isdigit('$'), 0);
		assert_equal_int("testing newline ('\\n')", ft_isdigit('\n'), 0);
		assert_equal_int("testing negative number", ft_isdigit(-3), 0);
	}
	printf("-------------------------------\n");
}