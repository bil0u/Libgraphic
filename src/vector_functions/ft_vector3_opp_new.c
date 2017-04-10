/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_opp_new.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 06:15:20 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Opposite t_vector3 value : v = -v
**		return a new t_vector3 (malloc used)
*/

t_vector3	*ft_vector3_opp_new(t_vector3 *v)
{
	t_vector3	*dst;

	if ((dst = (t_vector3 *)malloc(sizeof(t_vector3))) == NULL)
		return (NULL);
	dst->x = -(v->x);
	dst->y = -(v->y);
	dst->z = -(v->z);
	return (dst);
}
