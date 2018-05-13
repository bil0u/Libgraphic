/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_to_vec3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:20:49 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../../vector/includes/vector.h"
#include "../includes/quaternions.h"

/*
**	->	Convert t_vector4 to t_quater
*/

t_vector3	ft_quat_to_vec3(t_quater v)
{
	t_vector3	dst;

	dst.x = v.x / v.w;
	dst.y = v.y / v.w;
	dst.z = v.z / v.w;
	return (dst);
}
