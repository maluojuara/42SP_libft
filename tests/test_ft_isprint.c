/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:32:25 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 13:45:13 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isprint(void)
{
	char	*function_name = "ft_isprint";
	printf("\033[1m\n%s:\033[0m\n", function_name);

	if (!norm_error(function_name))
	{
		assert_equal_int("testing int -23", ft_isprint(-23), 0);
		assert_equal_int("testing int 42", ft_isprint(42), 1);
		assert_equal_int("testing space (' ')", ft_isprint(' '), 1);
		assert_equal_int("testing big integer", ft_isprint(928233), 0);
		assert_equal_int("testing null", ft_isprint('\0'), 0);
		assert_equal_int("testing 127", ft_isprint(127), 0);
	}
	printf("-------------------------------\n");
}
