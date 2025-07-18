/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:40:29 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/17 21:47:27 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

// //functions - part 1


// t_test	test_isascii(void)
// {
// 	t_test	result = {"ft_isascii", 1, NULL};
// 	int	i;
// 	int	norm_error = check_norminette(result.name);

// 	if (norm_error)
// 	{
// 		result.passed = 0;
// 		result.fail_case = "norm error";
// 	}
// 	else
// 	{
// 		struct {
// 		int input;
// 		int expected;
// 		char *desc;
// 	} cases[] = {
// 		{-23, 0, "testing int -23"},
// 		{21, 1, "testing int 21"},
// 		{' ', 1, "testing space (' ')"},
// 		{928233, 0, "testing int 928233"},
// 		{'\0', 1, "testing null"},
// 	};

// 	i = 0;
// 	while (i < 5)
// 	{
// 		if(ft_isascii(cases[i].input) != cases[i].expected)
// 		{
// 			result.fail_case = cases[i].desc;
// 			result.passed = 0;
// 			return	(result);
// 		}
// 		i++;
// 	}
// 	}
// 	return (result);
// }

// t_test	test_isprint(void)
// {
// 	t_test	result = {"ft_isprint", 1, NULL};
// 	int	i;
// 	int	norm_error = check_norminette(result.name);

// 	if (norm_error)
// 	{
// 		result.passed = 0;
// 		result.fail_case = "norm error";
// 	}
// 	else
// 	{
// 		struct {
// 		int input;
// 		int expected;
// 		char *desc;
// 	} cases[] = {
// 		{-23, 0, "testing int -23"},
// 		{42, 1, "testing int 42"},
// 		{' ', 1, "testing space (' ')"},
// 		{928233, 0, "testing int 928233"},
// 		{'\0', 0, "testing null"},
// 		{127, 0, "testing 127"},
// 	};

// 	i = 0;
// 	while (i < 6)
// 	{
// 		if(ft_isprint(cases[i].input) != cases[i].expected)
// 		{
// 			result.fail_case = cases[i].desc;
// 			result.passed = 0;
// 			return	(result);
// 		}
// 		i++;
// 	}
// 	}
// 	return (result);
// }

// t_test	test_strlen(void)
// {
// 	t_test	result = {"ft_strlen", 1, NULL};
// 	int	i;
// 	int	norm_error = check_norminette(result.name);

// 	if (norm_error)
// 	{
// 		result.passed = 0;
// 		result.fail_case = "norm error";
// 	}
// 	else
// 	{
// 		struct {
// 		char *input;
// 		size_t expected;
// 		char *desc;
// 	} cases[] = {
// 		{"malu", 4, "testing string \"malu\""},
// 		{"", 0, "testing empty string"},
// 		{"a", 1, "testing string with one letter"},
// 		{"a 	90", 5, "testing string with spaces and numbers"},
// 		{"oioioioioioioioioiioioioioioioioioioioioi", 41, "testing big string"},
// 	};

// 	i = 0;
// 	while (i < 5)
// 	{
// 		if(ft_strlen(cases[i].input) != cases[i].expected)
// 		{
// 			result.fail_case = cases[i].desc;
// 			result.passed = 0;
// 			return	(result);
// 		}
// 		i++;
// 	}
// 	}
// 	return (result);
// }

// t_test test_memset(void)
// {
// 	t_test result = {"ft_memset", 1, NULL};
// 	int	i;

// 	int norm_error = check_norminette(result.name);
// 	if (norm_error)
// 	{
// 		result.passed = 0;
// 		result.fail_case = "norm error";
// 	}
// 	else
// 	{
// 		struct {
// 			char	input[10];
// 			int		fill;
// 			size_t	n;
// 			char	expected[10];
// 			char	*desc;
// 		} cases[] = {
// 			{"abcdefghi", 'x', 3, "xxxdefghi", "filling 3 bytes with 'x'"},
// 			{"abcdefghi", 42, 0, "abcdefghi", "filling 0 bytes"},
// 			{"abcdefghi", '-', 10, "----------", "filling entire buffer"},
// 			{"", 89, 0, "", "testing empty buffer"},
// 		};

// 		for (i = 0; i < 4; i++)
// 		{
// 			char buffer[10];
// 			memcpy(buffer, cases[i].input, 10);

// 			ft_memset(buffer, cases[i].fill, cases[i].n);

// 			if (memcmp(buffer, cases[i].expected, 10) != 0)
// 			{
// 				result.passed = 0;
// 				result.fail_case = cases[i].desc;
// 				return result;
// 			}
// 		}
// 	}
// 	return result;
// }

// t_test	test_bzero(void)
// {
// 	t_test result = {"ft_bzero", 1, NULL};
// 	int	i;

// 	int norm_error = check_norminette(result.name);
// 	if (norm_error)
// 	{
// 		result.passed = 0;
// 		result.fail_case = "norm error";
// 	}
// 	else
// 	{
// 		struct {
// 			char	input[10];
// 			size_t	n;
// 			char	expected[10];
// 			char	*desc;
// 		} cases[] = {
// 			{"abcdefghi", 3, "\0\0\0defghi", "zero first 3 bytes"},
// 			{"abcdefghi", 0, "abcdefghi",   "zero 0 bytes"},
// 			{"abcdefghi", 9, "\0\0\0\0\0\0\0\0\0", "zero all 9 bytes"},
// 			{"", 0, "", "empty buffer with n = 0"},
// 		};

// 		i = 0;
// 		while (i < 4)
// 		{
// 			char buffer[10];
// 			memcpy(buffer, cases[i].input, 10);

// 			ft_bzero(buffer, cases[i].n);

// 			if (memcmp(buffer, cases[i].expected, 10) != 0)
// 			{
// 				result.passed = 0;
// 				result.fail_case = cases[i].desc;
// 				return result;
// 			}
// 			i++;
// 		}
// 	}
// 	return result;
// }