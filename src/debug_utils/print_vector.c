/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_vector.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 01:43:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 10:33:28 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"
#include <stdio.h>

void	print_vec2(t_vector2 v)
{
	int		precision;

	precision = FLOAT_PRECISION;
	printf("{%2$ .*1$f %3$ .*1$f }",
											precision, v.x, v.y);
}

void	print_vec3(t_vector3 v)
{
	int		precision;

	precision = FLOAT_PRECISION;
	printf("{%2$ .*1$f %3$ .*1$f %4$ .*1$f }",
											precision, v.x, v.y, v.z);
}

void	print_quat(t_quater q)
{
	int		precision;

	precision = FLOAT_PRECISION;
	printf("(%2$ .*1$f){%3$ .*1$f %4$ .*1$f %5$ .*1$f }",
											precision, q.w, q.x, q.y, q.z);
}
