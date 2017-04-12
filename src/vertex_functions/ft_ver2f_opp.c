/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver2f_opp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 09:42:51 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Opposite t_vertex2f value : v = -v
**		modify the original value
*/

t_vertex2f	ft_ver2f_opp(t_vertex2f *v)
{
	t_vertex2f	dst;

	dst.x = -(v->x);
	dst.y = -(v->y);
	return (dst);
}
