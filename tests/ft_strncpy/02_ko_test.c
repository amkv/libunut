/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ko_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 17:18:31 by akalmyko          #+#    #+#             */
/*   Updated: 2017/02/14 17:18:32 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ko_strncpy_test(void)
{
	char		*src;
	char		*dst;
	size_t		len;

	src = "asd";
	len = 3;
	dst = (char*)malloc(sizeof(char) * 1);
	ft_strncpy(dst, src, len);
	if (dst == NULL)
		return (0);
	else
		return (-1);
}

int				ko_strncpy(void)
{
	if (ko_strncpy_test() == 0)
		return (0);
	else
		return (-1);
}
