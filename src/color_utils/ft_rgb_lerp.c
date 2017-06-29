/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb_lerp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 21:06:05 by upopee            #+#    #+#             */
/*   Updated: 2017/06/28 21:46:25 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_colorRGB	ft_rgb_lerp(t_colorRGB a, t_colorRGB b, float i)
{
	t_colorRGB	shade;

	shade.red = a.red + (b.red - a.red) * i;
	shade.green = a.green + (b.green - a.green) * i;
	shade.blue = a.blue + (b.blue - a.blue) * i;
	return (shade);
}
