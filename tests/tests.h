/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:17:06 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/15 12:29:21 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <stdio.h>
# include "../libft.h"

//tests
int	test_isalpha(void);
int	test_isdigit(void);
int	test_isalnum(void);

//utils
void	ft_foreach(int *tab, int length, void (*f) (int));
void	print_result(char *test_name, int passed);

#endif