/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_negative_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 20:31:21 by akalmyko          #+#    #+#             */
/*   Updated: 2017/02/14 20:31:22 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	atoi_minus_plus_test(void)
{
	char	*str;
	int		result;

	str = "--10";
	result = ft_atoi(str);
	if (result == 0)
		return (0);
	else
		return (-1);
}

int			atoi_minus_plus(void)
{
	if (atoi_minus_plus_test() == 0)
		return (0);
	else
		return (-1);
}
