/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   runner_int_to_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:48:28 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/17 21:22:46 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

t_test runner_int_to_int(
	char *test_name,
	t_case_int_to_int *cases,
	int case_count,
	int (*fn)(int)
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
		int input = cases[i].input;
		int expected = cases[i].expected;
		int output = fn(input);

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