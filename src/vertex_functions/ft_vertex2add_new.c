/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex2add_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 05:38:54 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Add two t_vertex2 : v1 + v2
**		result is stored in a new t_vertex2 (malloc used)
*/

t_vertex2	*ft_vertex2add_new(t_vertex2 *v1, t_vertex2 *v2)
{
	t_vertex2	*dst;

	if ((dst = (t_vertex2 *)malloc(sizeof(t_vertex2))) == NULL)
		return (NULL);
	dst->x = v1->x + v2->x;
	dst->y = v1->y + v2->y;
	return (dst);
}
