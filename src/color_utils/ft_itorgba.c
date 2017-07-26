/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itorgba.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 08:55:52 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:23:49 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_colorrgba		ft_itorgba(int color)
{
	t_colorrgba		dst;

	dst.blue = color & 0xFF;
	dst.green = (color >> 8) & 0xFF;
	dst.red = (color >> 16) & 0xFF;
	dst.alpha = (color >> 24) & 0xFF;
	return (dst);
}
