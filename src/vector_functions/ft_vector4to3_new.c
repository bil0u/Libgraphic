/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector4to3_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 05:35:50 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Convert t_vector4 to t_vector3
**		return a new vector result of the conversion
*/

t_vector3	*ft_vector4to3_new(t_vector4 *v)
{
	t_vector3	*dst;

	if ((dst = (t_vector3 *)malloc(sizeof(t_vector3))) == NULL)
		return (NULL);
	dst->x = v->x / v->w;
	dst->y = v->y / v->w;
	dst->z = v->z / v->w;
	return (dst);
}
