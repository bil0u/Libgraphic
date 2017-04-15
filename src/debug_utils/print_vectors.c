/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_vectors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 01:43:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/15 20:26:18 by upopee           ###   ########.fr       */
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

void	print_quat(t_quater *v)
{
	if (!v)
		return ;
	printf("(% .2f){% .2f % .2f % .2f }", v->w, v->x, v->y, v->z);
}
