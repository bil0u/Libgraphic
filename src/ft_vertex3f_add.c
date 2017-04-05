/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex3f_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/05 16:50:25 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_vertex3f	*ft_vertex3f_add(t_vertex3f *v1, t_vertex3f *v2)
{
	t_vertex3f	*dst;

	if ((dst = (t_vertex3f *)ft_memalloc(sizeof(t_vertex3f))) == NULL)
		return (NULL);
	dst->x = v1->x + v2->x;
	dst->y = v1->y + v2->y;
	dst->z = v1->z + v2->z;
	return (dst);
}
