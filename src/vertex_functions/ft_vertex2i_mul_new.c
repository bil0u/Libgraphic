/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex2i_mul_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/11 01:23:53 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Add two t_vertex2i : v1 * v2
**		result is stored in a new t_vertex2i (malloc used)
*/

t_vertex2i	*ft_vertex2i_mul_new(t_vertex2i *v1, t_vertex2i *v2)
{
	t_vertex2i	*dst;

	if ((dst = (t_vertex2i *)malloc(sizeof(t_vertex2i))) == NULL)
		return (NULL);
	dst->x = v1->x * v2->x;
	dst->y = v1->y * v2->y;
	return (dst);
}
