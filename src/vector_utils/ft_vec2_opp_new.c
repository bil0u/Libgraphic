/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_opp_new.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 07:47:52 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Opposite t_vector2 value
**		return the opposite of v in a new t_vector2 (malloc used)
*/

t_vector2	*ft_vec2_opp_new(t_vector2 *v)
{
	t_vector2	*dst;

	if ((dst = (t_vector2 *)malloc(sizeof(t_vector2))) == NULL)
		return (NULL);
	dst->x = -(v->x);
	dst->y = -(v->y);
	return (dst);
}
