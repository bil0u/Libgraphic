/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itorgb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 08:55:52 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:09:45 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/colors.h"

t_colorrgb		ft_itorgb(int color)
{
	t_colorrgb		dst;

	dst.blue = color & 0xFF;
	dst.green = (color >> 8) & 0xFF;
	dst.red = (color >> 16) & 0xFF;
	return (dst);
}
