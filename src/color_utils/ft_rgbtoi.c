/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgbtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 08:55:52 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:24:58 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

int		ft_rgbtoi(t_colorrgb color)
{
	int		dst;

	dst = color.blue | (color.green << 8) | (color.red << 16);
	return (dst);
}
