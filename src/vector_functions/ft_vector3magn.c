/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3magn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 05:23:31 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

/*
**	->	Magnitude t_vector3 value
**		return the lenght of v (float value)
*/

float	ft_vector3magn(t_vector3 *v)
{
	return (sqrtf(powf(v->x, 2.0) + powf(v->y, 2.0) + powf(v->z, 2.0)));
}
