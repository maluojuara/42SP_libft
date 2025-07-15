/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:22:46 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/15 11:46:50 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_foreach(int *tab, int length, void (*f) (int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

void	print_result(char *test_name, int passed)
{
	if (passed)
	{
		printf("%s: \033[32mok\033[0m\n", test_name);
		return ;
	}
	printf("%s: \033[31mko\033[0m\n", test_name);
}
