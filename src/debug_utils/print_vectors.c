/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_vectors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 01:43:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/14 05:03:21 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"
#include <stdio.h>

void	print_vec2(t_vector2 *v)
{
	if (!v)
		return ;
	printf("{% .2f % .2f }", v->x, v->y);
}

void	print_vec3(t_vector3 *v)
{
	if (!v)
		return ;
	printf("{% .2f % .2f % .2f }", v->x, v->y, v->z);
}

void	print_vec4(t_vector4 *v)
{
	if (!v)
		return ;
	printf("{% .2f % .2f % .2f }(% .2f)", v->x, v->y, v->z, v->w);
}
