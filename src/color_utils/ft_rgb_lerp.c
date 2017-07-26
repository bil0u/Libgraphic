/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb_lerp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 21:06:05 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:24:22 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_colorrgb	ft_rgb_lerp(t_colorrgb a, t_colorrgb b, float i)
{
	t_colorrgb	shade;

	shade.red = a.red + (b.red - a.red) * i;
	shade.green = a.green + (b.green - a.green) * i;
	shade.blue = a.blue + (b.blue - a.blue) * i;
	return (shade);
}
