/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgba_lerp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 21:06:05 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:24:45 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_colorrgba	ft_rgba_lerp(t_colorrgba a, t_colorrgba b, float i)
{
	t_colorrgba	shade;

	shade.red = a.red + (b.red - a.red) * i;
	shade.green = a.green + (b.green - a.green) * i;
	shade.blue = a.blue + (b.blue - a.blue) * i;
	shade.alpha = a.alpha + (b.alpha - a.alpha) * i;
	return (shade);
}
