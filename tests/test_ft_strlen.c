/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:48:02 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 13:47:23 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_strlen(void)
{
	char	*function_name = "ft_strlen";
	printf("\033[1m\n%s:\033[0m\n", function_name);

	if (!norm_error(function_name))
	{
		assert_equal_int("testing string \"malu\"", ft_strlen("malu"), 4);
		assert_equal_int("testing empty string", ft_strlen(""), 0);
		assert_equal_int("testing string with one letter", ft_strlen("a"), 1);
		assert_equal_int("testing string with spaces and numbers", ft_strlen("a 	90"), 5);
		assert_equal_int("testing big string", ft_strlen("oioioioioioioioioiioioioioioioioioioioioi"), 41);
		assert_equal_int("testing string with new line", ft_strlen("abc\n"), 4);
		assert_equal_int("testing string with special ascii characters", ft_strlen("a$!-"), 4);
	}
	printf("-------------------------------\n");
}
