/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex2opp_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 06:08:55 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Opposite t_vertex2 value: v = -v
**		result is stored in a new t_vertex2 (malloc used)
*/

t_vertex2	*ft_vertex2opp_new(t_vertex2 *v1)
{
	t_vertex2	*dst;

	if ((dst = (t_vertex2 *)malloc(sizeof(t_vertex2))) == NULL)
		return (NULL);
	dst->x = -(v1->x);
	dst->y = -(v1->y);
	return (dst);
}
