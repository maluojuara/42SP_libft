/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:40:29 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/16 11:55:35 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

//norminette

int	check_norminette(char *file_name)
{
	char	cmd[256];
	snprintf(cmd, sizeof(cmd), "norminette -R CheckForbiddenSourceHeader %s.c > /dev/null 2>&1", file_name);

	int norm = system(cmd);

	if (WIFEXITED(norm))
    	return WEXITSTATUS(norm); //0
	else
    	return 1;  
}

//functions - part 1

t_test	test_isalpha(void)
{
	t_test	result = {"ft_isalpha", 1, NULL};
	int	i;
	int	norm_error = check_norminette(result.name);

	if (norm_error)
	{
		result.passed = 0;
		result.fail_case = "norm error";
	}
	else
	{
		struct {
			int input;
			int expected;
			char *desc;
		} cases[] = {
			{'m', 1, "testing char 'm'"},
			{'M', 1, "testing char 'M'"},
			{' ', 0, "testing space (' ')"},
			{'9', 0, "testing char '9'"},
			{'\0', 0, "testing null"},
			{'$', 0, "testing char '$'"},
			{'\n', 0, "testing newline ('\\n')"},
			{-3, 0, "testing negative number"}
		};

		i = 0;
		while (i < 8)
		{
			if(ft_isalpha(cases[i].input) != cases[i].expected)
			{
				result.fail_case = cases[i].desc;
				result.passed = 0;
				return	(result);
			}
			i++;
		}
	}
	return (result);
}

t_test	test_isdigit(void)
{
	t_test	result = {"ft_isdigit", 1, NULL};
	int	i;
	int	norm_error = check_norminette(result.name);

	if (norm_error)
	{
		result.passed = 0;
		result.fail_case = "norm error";
	}
	else
	{
		struct {
		int input;
		int expected;
		char *desc;
	} cases[] = {
		{'m', 0, "testing char 'm'"},
		{'M', 0, "testing char 'M'"},
		{' ', 0, "testing space (' ')"},
		{'9', 1, "testing char '9'"},
		{'\0', 0, "testing null"},
		{'$', 0, "testing char '$'"},
		{'\n', 0, "testing newline ('\\n')"},
		{-3, 0, "testing negative number"}
	};

	i = 0;
	while (i < 8)
	{
		if(ft_isdigit(cases[i].input) != cases[i].expected)
		{
			result.fail_case = cases[i].desc;
			result.passed = 0;
			return	(result);
		}
		i++;
	}
	}
	return (result);
}


// int	test_isalnum(void)
// {
// 	if (ft_isalnum('m') != 1)
// 		return (0);
// 	if (ft_isalnum('M') != 1)
// 		return (0);
// 	if (ft_isalnum('9') != 1)
// 		return (0);
// 	if (ft_isalnum(' ') != 0)
// 		return (0);
// 	if (ft_isalnum('\0') != 0)
// 		return (0);
// 	if (ft_isalnum('$') != 0)
// 		return (0);
// 	if (ft_isalnum('\n') != 0)
// 		return (0);
// 	if (ft_isalnum(-3) != 0)
// 		return (0);
// 	return (1);
// }

// int	test_isascii(void)
// {
// 	if (ft_isascii(-23) != 0)
// 		return (0);
// 	if (ft_isascii(21) != 1)
// 		return (0);
// 	if (ft_isascii('\0') != 1)
// 		return (0);
// 	if (ft_isascii(1289) != 0)
// 		return (0);
// 	return (1);
// }

// int	test_isprint(void)
// {
// 	if (ft_isprint(-23) != 0)
// 		return (0);
// 	if (ft_isprint('\0') != 0)
// 		return (0);
// 	if (ft_isprint(42) != 1)
// 		return (0);
// 	if (ft_isprint(127) != 0)
// 		return (0);
// 	if (ft_isprint(289) != 0)
// 		return (0);
// 	return (1);
// }