/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex2f_opp_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/11 01:30:28 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Opposite t_vertex2f value: v = -v
**		result is stored in a new t_vertex2f (malloc used)
*/

t_vertex2f	*ft_vertex2f_opp_new(t_vertex2f *v1)
{
	t_vertex2f	*dst;

	if ((dst = (t_vertex2f *)malloc(sizeof(t_vertex2f))) == NULL)
		return (NULL);
	dst->x = -(v1->x);
	dst->y = -(v1->y);
	return (dst);
}
