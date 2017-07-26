/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgba_default.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 16:50:28 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:24:43 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_colorrgba	ft_rgba_default(void)
{
	t_colorrgba	dst;

	dst.red = DEFAULT_RED_VALUE;
	dst.green = DEFAULT_GREEN_VALUE;
	dst.blue = DEFAULT_BLUE_VALUE;
	dst.alpha = DEFAULT_ALPHA_VALUE;
	return (dst);
}
