/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_opp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:22:43 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vector.h"

/*
**	->	Opposite t_vector2 value
*/

t_vector2	ft_vec2_opp(t_vector2 v)
{
	t_vector2	dst;

	dst.x = -(v.x);
	dst.y = -(v.y);
	return (dst);
}
