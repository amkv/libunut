/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 17:18:24 by akalmyko          #+#    #+#             */
/*   Updated: 2017/02/14 17:18:25 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ok_strncpy_test(void)
{
	char		*src;
	char		*dst;
	size_t		len;

	src = "TeSt\n";
	len = ft_strlen(src);
	dst = (char*)malloc(sizeof(char) * (len + 1));
	ft_strncpy(dst, src, len);
	if (ft_strcmp(dst, src) == 0)
	{
		free(dst);
		return (0);
	}
	else
	{
		free(dst);
		return (-1);
	}
}

int				ok_strncpy(void)
{
	if (ok_strncpy_test() == 0)
		return (0);
	else
		return (-1);
}
