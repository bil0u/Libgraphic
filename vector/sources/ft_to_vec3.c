/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_vec3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 01:30:47 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:22:20 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vector.h"

t_vector3	ft_to_vec3(float x, float y, float z)
{
	t_vector3	dst;

	dst.x = x;
	dst.y = y;
	dst.z = z;
	return (dst);
}
