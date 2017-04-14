/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver2i_opp_new.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 07:16:35 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Opposite t_vertex2i value: v = -v
**		result is stored in a new t_vertex2i (malloc used)
*/

t_vertex2i	*ft_ver2i_opp_new(t_vertex2i *v1)
{
	t_vertex2i	*dst;

	if ((dst = (t_vertex2i *)malloc(sizeof(t_vertex2i))) == NULL)
		return (NULL);
	dst->x = -(v1->x);
	dst->y = -(v1->y);
	return (dst);
}
