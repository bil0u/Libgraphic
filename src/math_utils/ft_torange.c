/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_torange.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 21:17:35 by upopee            #+#    #+#             */
/*   Updated: 2017/06/26 21:46:33 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

float		ft_to_frange(t_frange in, t_frange out, float x)
{
	return (((x - in.min) / (in.max - in.min)) * (out.max - out.min) + out.min);
}
