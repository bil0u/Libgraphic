/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spheric_to_vec3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 03:46:10 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:05:13 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

t_vector3	ft_spheric_to_vec3(float theta, float phi)
{
	t_vector3	dst;

	dst.x = cosf(phi) * sinf(theta);
	dst.y = sinf(phi) * sinf(theta);
	dst.z = cosf(theta);
	return (dst);
}
