/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver2i_mul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:24:03 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vertex.h"

/*
**	->	Multiply two t_vertex2i : v1 * v2
**		modify the v1 value
*/

t_vertex2i	ft_ver2i_mul(t_vertex2i v1, t_vertex2i v2)
{
	t_vertex2i	dst;

	dst.x = v1.x * v2.x;
	dst.y = v1.y * v2.y;
	return (dst);
}
