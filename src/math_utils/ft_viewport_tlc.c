/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_viewport_tlc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 19:07:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 09:50:47 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_vertex2i	ft_viewport_tlc(t_vector3 ndc, t_vertex2i origin,
							unsigned int width, unsigned int height)
{
	t_vertex2i	window;

	window.x = (int)((ndc.x + 1.0) * (float)--width * 0.5 + (float)origin.x);
	window.y = (int)((1.0 - ndc.y) * (float)--height * 0.5 + (float)origin.y);
	return (window);
}
