/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   runner_str_to_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:45:25 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/18 18:59:15 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../tests.h"

t_test runner_str_to_int(
	char *test_name,
	t_case_str_to_int *cases,
	int case_count,
	size_t (*fn)(const char *str)
)
{
	t_test result;
	result.name = test_name;
	result.passed = 1;
	result.fail_count = 0;
	result.fail_cases = malloc(sizeof(char *) * case_count);
	if (!result.fail_cases)
	{
		result.passed = 0;
		static char	*internal_error = "internal error";
		result.fail_cases = &internal_error;
		result.fail_count = 1;
		return result;
	}
	int	i = 0;
	while (i < case_count)
	{
		const char *input = cases[i].input;
		size_t expected = cases[i].expected;
		size_t output = fn(input);

		if (output != expected)
		{
			result.passed = 0;
			result.fail_cases[result.fail_count] = cases[i].desc;
			result.fail_count++;
		}
		i++;
	}
	return	(result);
}
