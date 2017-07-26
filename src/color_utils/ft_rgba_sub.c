/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgba_sub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 16:57:07 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:24:50 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_colorrgba	ft_rgba_sub(t_colorrgba color, t_colorrgba sub)
{
	color.red -= sub.red;
	color.green -= sub.green;
	color.blue -= sub.blue;
	color.alpha -= sub.alpha;
	return (color);
}
