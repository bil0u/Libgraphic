/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tovertex4i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/05 16:44:58 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_vertex4i	*ft_tovertex4i(t_vertex3i *v, float *w)
{
	t_vertex4i	*dst;

	if ((dst = (t_vertex4i *)ft_memalloc(sizeof(t_vertex4i))) == NULL)
		return (NULL);
	dst->x = v->x;
	dst->y = v->y;
	dst->z = v->z;
	dst->w = *w;
	return (dst);
}
