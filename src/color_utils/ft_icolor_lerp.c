/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_icolor_lerp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 21:06:05 by upopee            #+#    #+#             */
/*   Updated: 2017/06/29 01:27:57 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

int		ft_icolor_lerp(int a, int b, float i)
{
	int		bm;
	int		gm;
	int		rm;
	int		am;

	bm = 0xFF;
	gm = 0xFF00;
	rm = 0xFF0000;
	am = 0xFF000000;
	return ((int)(((a & bm) + ((b & bm) - (a & bm)) * i))
		| ((int)(((a & gm) >> 8) + (((b & gm) - (a & gm)) >> 8) * i) << 8)
		| ((int)(((a & rm) >> 16) + (((b & rm) - (a & rm)) >> 16) * i) << 16)
		| ((int)(((a & am) >> 24) + (((b & am) - (a & am)) >> 24) * i) << 24) );
}
