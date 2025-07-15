/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:37:40 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/15 18:45:27 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	print_result(t_test test)
{
	if (test.passed)
	{
		printf("%s: \033[32mok\033[0m\n", test.name);
		return ;
	}
	printf("%s: \033[31mko\033[0m\n", test.name);
	printf("\033[31mfailed on case test: %s\033[0m\n", test.fail_case);
}

int	main(void)
{
	t_test (*tests[])(void) = {test_isalpha, test_isdigit, NULL};
	int	i;

	i = 0;
	while (tests[i] != NULL)
	{
		t_test	result = tests[i]();
		print_result(result);
		i++;
	}
	return (0);
}
