/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector2opp_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 05:23:34 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Opposite t_vector2 value
**		return the opposite of v in a new t_vector2 (malloc used)
*/

t_vector2	*ft_vector2opp_new(t_vector2 *v1)
{
	t_vector2	*dst;

	if ((dst = (t_vector2 *)malloc(sizeof(t_vector2))) == NULL)
		return (NULL);
	dst->x = -(v1->x);
	dst->y = -(v1->y);
	return (dst);
}
