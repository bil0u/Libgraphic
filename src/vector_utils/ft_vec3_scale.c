/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_scale.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:12:19 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Multiply a vector with a scalar : v * n
*/

t_vector3		ft_vec3_scale(t_vector3 v, float n)
{
	t_vector3	dst;

	dst.x = v.x * n;
	dst.y = v.y * n;
	dst.z = v.z * n;
	return (dst);
}
