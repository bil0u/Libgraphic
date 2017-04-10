/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex3mul_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 06:12:23 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Multiply two t_vertex3 : v1 * v2
**		result is stored in a new t_vertex3 (malloc used)
*/

t_vertex3	*ft_vertex3mul_new(t_vertex3 *v1, t_vertex3 *v2)
{
	t_vertex3	*dst;

	if ((dst = (t_vertex3 *)malloc(sizeof(t_vertex3))) == NULL)
		return (NULL);
	dst->x = v1->x * v2->x;
	dst->y = v1->y * v2->y;
	dst->z = v1->z * v2->z;
	return (dst);
}
