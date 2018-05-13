/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vertex.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 19:31:38 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 19:39:49 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VERTEX_H
# define VERTEX_H

typedef struct	s_vertex2i
{
	int			x;
	int			y;
	int			color;
}				t_vertex2i;

t_vertex2i		ft_to_ver2i(int x, int y);
t_vertex2i		ft_ver2i_add(t_vertex2i v1, t_vertex2i v2);
t_vertex2i		ft_ver2i_sub(t_vertex2i v1, t_vertex2i v2);
t_vertex2i		ft_ver2i_div(t_vertex2i v1, t_vertex2i v2);
t_vertex2i		ft_ver2i_mul(t_vertex2i v1, t_vertex2i v2);
t_vertex2i		ft_ver2i_opp(t_vertex2i v);

typedef struct	s_vertex3i
{
	int			x;
	int			y;
	int			z;
	int			color;
}				t_vertex3i;

t_vertex3i		ft_to_ver3i(int x, int y, int z);
t_vertex3i		ft_ver3i_add(t_vertex3i v1, t_vertex3i v2);
t_vertex3i		ft_ver3i_sub(t_vertex3i v1, t_vertex3i v2);
t_vertex3i		ft_ver3i_div(t_vertex3i v1, t_vertex3i v2);
t_vertex3i		ft_ver3i_mul(t_vertex3i v1, t_vertex3i v2);
t_vertex3i		ft_ver3i_opp(t_vertex3i v);

typedef struct	s_vertex2f
{
	float		x;
	float		y;
	int			color;
}				t_vertex2f;

t_vertex2f		ft_to_ver2f(float x, float y);
t_vertex2f		ft_ver2f_add(t_vertex2f v1, t_vertex2f v2);
t_vertex2f		ft_ver2f_sub(t_vertex2f v1, t_vertex2f v2);
t_vertex2f		ft_ver2f_div(t_vertex2f v1, t_vertex2f v2);
t_vertex2f		ft_ver2f_mul(t_vertex2f v1, t_vertex2f v2);
t_vertex2f		ft_ver2f_opp(t_vertex2f v);

typedef struct	s_vertex3f
{
	float		x;
	float		y;
	float		z;
	int			color;
}				t_vertex3f;

t_vertex3f		ft_to_ver3f(float x, float y, float z);
t_vertex3f		ft_ver3f_add(t_vertex3f v1, t_vertex3f v2);
t_vertex3f		ft_ver3f_sub(t_vertex3f v1, t_vertex3f v2);
t_vertex3f		ft_ver3f_div(t_vertex3f v1, t_vertex3f v2);
t_vertex3f		ft_ver3f_mul(t_vertex3f v1, t_vertex3f v2);
t_vertex3f		ft_ver3f_opp(t_vertex3f v);
t_vertex3f		ft_ver3i_to_ver3f(t_vertex3i v);


#endif
