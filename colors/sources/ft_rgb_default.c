/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb_default.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 16:50:28 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:09:55 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/colors.h"

t_colorrgb	ft_rgb_default(void)
{
	t_colorrgb	dst;

	dst.red = DEFAULT_RED_VALUE;
	dst.green = DEFAULT_GREEN_VALUE;
	dst.blue = DEFAULT_BLUE_VALUE;
	return (dst);
}
