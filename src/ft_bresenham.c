/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bresenham.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 09:49:25 by upopee            #+#    #+#             */
/*   Updated: 2017/04/05 03:39:01 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "libgraphic.h"

void	mlx_bresenham(t_mlxenv *e, t_vertex2D p1, t_vertex2D p2)
{
	int	delta_x;
	int	delta_y;
	int	error;

	error = p2.x - p1.x;
	delta_x = (error << 1);
	delta_y = ((p2.y - p1.y) << 1);
	while (p1.x <= p2.x)
	{
		mlx_pixel_put(e->mlx_id, e->win.id, p1.x, p1.y, 0x00FFFFFF);
		p1.x++;
		if ((error -= delta_y) <= 0)
		{
			p1.y++;
			error += delta_x;
		}
	}
}
