/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgba_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 16:57:07 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:24:47 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_colorrgba	ft_rgba_set(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
{
	t_colorrgba	dst;

	dst.red = red;
	dst.green = green;
	dst.blue = blue;
	dst.alpha = alpha;
	return (dst);
}
