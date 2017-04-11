/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex2f_sub_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/11 01:30:29 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Substract two t_vertex2f : v1 - v2
**		result is stored in a new t_vertex2f (malloc used)
*/

t_vertex2f	*ft_vertex2f_sub_new(t_vertex2f *v1, t_vertex2f *v2)
{
	t_vertex2f	*dst;

	if ((dst = (t_vertex2f *)malloc(sizeof(t_vertex2f))) == NULL)
		return (NULL);
	dst->x = v1->x - v2->x;
	dst->y = v1->y - v2->y;
	return (dst);
}
