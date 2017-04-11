/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bus_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 17:18:46 by akalmyko          #+#    #+#             */
/*   Updated: 2017/02/14 17:18:47 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/includes/libft.h"

static int	bus_strncpy_test(void)
{
	char	*str;
	char	*dst;

	str = "TEST";
	dst = "asd";
	ft_strncpy(dst, str, ft_strlen(str));
	if (dst[0] != 'T')
		return (0);
	else
		return (-1);
}

int			bus_strncpy(void)
{
	if (bus_strncpy_test() == 0)
		return (0);
	else
		return (-1);
}
