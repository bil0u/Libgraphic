/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver2i_div.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 09:41:56 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Divide two t_vertex2i : v1 / v2
*/

t_vertex2i	ft_ver2i_div(t_vertex2i *v1, t_vertex2i *v2)
{
	t_vertex2i	dst;

	dst.x = v1->x / v2->x;
	dst.y = v1->y / v2->y;
	return (dst);
}