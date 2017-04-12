/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_add_new.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 07:48:45 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Add two t_vector3 : v1 + v2
**		result is stored in a new t_vector2 (malloc used)
*/

t_vector2	*ft_vec2_add_new(t_vector2 *v1, t_vector2 *v2)
{
	t_vector2	*dst;

	if ((dst = (t_vector2 *)malloc(sizeof(t_vector2))) == NULL)
		return (NULL);
	dst->x = v1->x + v2->x;
	dst->y = v1->y + v2->y;
	return (dst);
}
