/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tovertex4f.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/05 16:42:55 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_vertex4f	*ft_tovertex4f(t_vertex3f *v, float *w)
{
	t_vertex4f	*dst;

	if ((dst = (t_vertex4f *)ft_memalloc(sizeof(t_vertex4f))) == NULL)
		return (NULL);
	dst->x = v->x;
	dst->y = v->y;
	dst->z = v->z;
	dst->w = *w;
	return (dst);
}
