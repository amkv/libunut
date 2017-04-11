/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_seg_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 17:18:40 by akalmyko          #+#    #+#             */
/*   Updated: 2017/02/14 17:18:41 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		seg_strncpy_test(void)
{
	char		*src;
	char		*dst;
	size_t		len;

	src = "TeSt\n";
	len = ft_strlen(src);
	dst = (char*)malloc(sizeof(char) * (len + 1));
	ft_strncpy(dst, src, -1);
	if (ft_strcmp(dst, src) == 0)
		return (0);
	else
		return (-1);
}

int				seg_strncpy(void)
{
	if (seg_strncpy_test() == 0)
		return (0);
	else
		return (-1);
}
