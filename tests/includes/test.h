/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:06:59 by akalmyko          #+#    #+#             */
/*   Updated: 2017/02/14 19:02:40 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# define RET_SUCCESSFUL 0
# define RET_FAILURE -1

/*
** ft_strncpy
*/

int			strncpy_launcher();
int			ok_strncpy(void);
int			ko_strncpy(void);
int			seg_strncpy(void);
int			bus_strncpy(void);

#endif
