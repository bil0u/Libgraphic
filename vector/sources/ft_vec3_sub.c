/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_sub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:23:15 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vector.h"

/*
**	->	Add two t_vector3 : v1 - v2
*/

t_vector3	ft_vec3_sub(t_vector3 v1, t_vector3 v2)
{
	t_vector3	dst;

	dst.x = v1.x - v2.x;
	dst.y = v1.y - v2.y;
	dst.z = v1.z - v2.z;
	return (dst);
}
