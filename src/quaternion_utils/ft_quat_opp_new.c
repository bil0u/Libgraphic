/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_opp_new.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/19 00:24:52 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Opposite t_quater value : v = -v
**		return a new t_quater (malloc used)
*/

t_quater	*ft_quat_opp_new(t_quater *q)
{
	t_quater	*dst;

	if ((dst = (t_quater *)malloc(sizeof(t_quater))) == NULL)
		return (NULL);
	dst->w = q->w;
	dst->x = -(q->x);
	dst->y = -(q->y);
	dst->z = -(q->z);
	return (dst);
}
