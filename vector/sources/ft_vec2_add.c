/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:22:23 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vector.h"
/*
**	->	Add two t_vector3 : v1 + v2
**		modify the v1 value
*/

t_vector2	ft_vec2_add(t_vector2 v1, t_vector2 v2)
{
	t_vector2	dst;

	dst.x = v1.x + v2.x;
	dst.y = v1.y + v2.y;
	return (dst);
}
