/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bresenham.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 09:49:25 by upopee            #+#    #+#             */
/*   Updated: 2017/04/11 01:39:11 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "libgraphic.h"

/*
**	->	Draw a line defined by two vertices v1 & v2 int a mlx_window
**		Drawing algorithm comply to bresenham integer only variant
*/

void	mlx_bresenham(t_mlxenv *e, t_vertex2i v1, t_vertex2i v2)
{
	int	delta_x;
	int	delta_y;
	int	error;

	error = v2.x - v1.x;
	delta_x = (error << 1);
	delta_y = ((v2.y - v1.y) << 1);
	while (v1.x <= v2.x)
	{
		mlx_pixel_put(e->mlx_id, e->win.id, v1.x, v1.y, 0x00FFFFFF);
		v1.x++;
		if ((error -= delta_y) <= 0)
		{
			v1.y++;
			error += delta_x;
		}
	}
}
