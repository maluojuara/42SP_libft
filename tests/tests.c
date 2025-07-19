/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:40:29 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 13:48:37 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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