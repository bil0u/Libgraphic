/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex2i_sub.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/11 01:23:29 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Substract two t_vertex2i : v1 - v2
**		modify the v1 value
*/

t_vertex2i	*ft_vertex2i_sub(t_vertex2i *v1, t_vertex2i *v2)
{
	v1->x -= v2->x;
	v1->y -= v2->y;
	return (v1);
}
