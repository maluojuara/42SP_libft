/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:37:40 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/15 12:28:48 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	print_result("ft_isalpha", test_isalpha());
	print_result("ft_isdigit", test_isdigit());
	print_result("ft_isalnum", test_isalnum());
	return (0);
}
