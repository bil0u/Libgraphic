/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_quat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 01:29:29 by upopee            #+#    #+#             */
/*   Updated: 2017/04/20 01:30:32 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_quater	ft_to_quat(float x, float y, float z, float w)
{
	t_quater	dst;

	dst.x = x;
	dst.y = y;
	dst.z = z;
	dst.w = w;
	return (dst);
}
