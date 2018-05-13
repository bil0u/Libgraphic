/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_vector.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 01:43:17 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:42:09 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/debug.h"
#include "../../vertex/includes/vertex.h"
#include "../../vector/includes/vector.h"

void	print_ver2i(t_vertex2i v)
{
	int		precision;

	precision = FLOAT_PRECISION;
	printf("{%2$ .*1$d %3$ .*1$d }",
											precision, v.x, v.y);
}

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
