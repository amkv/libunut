/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 17:18:12 by akalmyko          #+#    #+#             */
/*   Updated: 2017/02/14 17:18:13 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libunit.h"
#include "../includes/test.h"

int			strncpy_launcher(void)
{
	t_test	*l_tests;

	l_tests = NULL;
	ft_printname("FT_STRNCPY");
	add_test(&l_tests, "01_ok_test", &ok_strncpy);
	add_test(&l_tests, "02_ko_test", &ko_strncpy);
	add_test(&l_tests, "03_seg_test", &seg_strncpy);
	add_test(&l_tests, "04_bus_test", &bus_strncpy);
	return (launch_list_of_tests(l_tests));
}
