/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector2crossprod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 05:23:32 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Vectorial product of two vectors2 : v1 ^ v2 = - v2 ^ v1
**		result is stored in v1
*/

t_vector2	*ft_vector2crossprod(t_vector2 *v1, t_vector2 *v2)
{
	v1->x += v2->x;
	v1->y += v2->y;
	return (v1);
}
