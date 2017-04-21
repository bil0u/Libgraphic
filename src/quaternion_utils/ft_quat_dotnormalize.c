/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_dotnormalize.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:49:31 by upopee            #+#    #+#             */
/*   Updated: 2017/04/20 18:25:27 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

void	ft_quat_dotnormalize(t_quater *q)
{
	float		w_inv;

	if (q->w != 0)
	{
		w_inv = 1.0 / q->w;
		q->x *= w_inv;
		q->y *= w_inv;
		q->z *= w_inv;
		q->w *= w_inv;
	}
}
