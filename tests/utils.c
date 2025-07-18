/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:55:32 by maluojuara        #+#    #+#             */
/*   Updated: 2025/07/18 19:01:09 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	print_result(t_test test)
{
	if (test.passed)
	{
		printf("%s: \033[32mok\033[0m\n", test.name);
		printf("------------------------------------\n");
		return ;
	}
	printf("%s: \033[31mko\033[0m\n", test.name);
	int	i = 0;
	
	while (i < test.fail_count)
	{
		printf("\033[31mfailed on case test: %s\033[0m\n", test.fail_cases[i]);
		i++;
	}
	
	printf("------------------------------------\n");
}

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
