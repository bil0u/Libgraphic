/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix4f_id.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:42:15 by upopee            #+#    #+#             */
/*   Updated: 2017/04/11 06:45:41 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_matrix4f	ft_matrix4f_id(void)
{
	t_matrix4f	m;

	m.m[0][0] = 1.0;
  m.m[0][1] = 0.0;
  m.m[0][2] = 0.0;
  m.m[0][3] = 0.0;
  m.m[1][0] = 0.0;
  m.m[1][1] = 1.0;
  m.m[1][2] = 0.0;
  m.m[1][3] = 0.0;
  m.m[2][0] = 0.0;
  m.m[2][1] = 0.0;
  m.m[2][2] = 1.0;
  m.m[2][3] = 0.0;
  m.m[3][0] = 0.0;
  m.m[3][1] = 0.0;
  m.m[3][2] = 0.0;
  m.m[3][3] = 1.0;
	return (m);
}