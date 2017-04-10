/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_opp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 05:27:53 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Opposite t_vector3 value : v = -v
**		modify the original value
*/

t_vector3	*ft_vector3_opp(t_vector3 *v)
{
	v->x = -(v->x);
	v->y = -(v->y);
	v->z = -(v->z);
	return (v);
}
