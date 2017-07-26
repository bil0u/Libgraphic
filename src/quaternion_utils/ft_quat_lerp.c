/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_lerp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:34:50 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:11:14 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_quater		ft_quat_lerp(t_quater a, t_quater b, float alpha)
{
	t_quater	out;
	float		a1;

	a1 = 1.0 - alpha;
	out.x = a1 * a.x + alpha * b.x;
	out.y = a1 * a.y + alpha * b.y;
	out.z = a1 * a.z + alpha * b.z;
	out.w = a1 * a.w + alpha * b.w;
	return (out);
}
