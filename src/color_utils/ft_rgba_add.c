/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgba_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 16:57:07 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:24:36 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_colorrgba	ft_rgba_add(t_colorrgba color, t_colorrgba add)
{
	color.red += add.red;
	color.green += add.green;
	color.blue += add.blue;
	color.alpha += add.alpha;
	return (color);
}
