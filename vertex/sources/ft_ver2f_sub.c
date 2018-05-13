/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver2f_sub.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:23:57 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vertex.h"

/*
**	->	Substract two t_vertex2f : v1 - v2
*/

t_vertex2f	ft_ver2f_sub(t_vertex2f v1, t_vertex2f v2)
{
	t_vertex2f	dst;

	dst.x = v1.x - v2.x;
	dst.y = v1.y - v2.y;
	return (dst);
}
