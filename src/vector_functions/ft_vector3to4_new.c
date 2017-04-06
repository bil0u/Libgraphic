/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3to4_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 05:36:30 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Convert t_vector3 to t_vector4
**		return a new vector result of the conversion
*/

t_vector4	*ft_vector3to4_new(t_vector3 *v, float *w)
{
	t_vector4	*dst;

	if ((dst = (t_vector4 *)malloc(sizeof(t_vector4))) == NULL)
		return (NULL);
	dst->x = v->x;
	dst->y = v->y;
	dst->z = v->z;
	dst->w = *w;
	return (dst);
}
