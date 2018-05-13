/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_viewport_llc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 19:07:25 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:13:07 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../vertex/includes/vertex.h"
#include "../../vector/includes/vector.h"

t_vertex2i	ft_viewport_llc(t_vector3 ndc, t_vertex2i origin,
							unsigned int width, unsigned int height)
{
	t_vertex2i	window;

	window.x = (int)((ndc.x + 1.0) * (float)--width * 0.5 + (float)origin.x);
	window.y = (int)((ndc.y + 1.0) * (float)--height * 0.5 + (float)origin.y);
	return (window);
}
