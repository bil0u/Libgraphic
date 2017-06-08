/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 16:57:07 by upopee            #+#    #+#             */
/*   Updated: 2017/06/04 22:47:43 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_colorRGBA	ft_rgba_set(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
{
	t_colorRGBA	dst;

	dst.red = red;
	dst.green = green;
	dst.blue = blue;
	dst.alpha = alpha;
	return (dst);
}
