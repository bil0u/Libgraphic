/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb_default.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 16:50:28 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:24:07 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_colorrgb	ft_rgb_default(void)
{
	t_colorrgb	dst;

	dst.red = DEFAULT_RED_VALUE;
	dst.green = DEFAULT_GREEN_VALUE;
	dst.blue = DEFAULT_BLUE_VALUE;
	return (dst);
}
