/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fscale.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 03:32:06 by upopee            #+#    #+#             */
/*   Updated: 2017/04/20 03:40:17 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

float	ft_fscale(float n, float min, float max, float smallest, float largest)
{
	float	ratio;

	ratio = (max - min) / (largest - smallest);
	return (min + ratio * (n - smallest));
}
