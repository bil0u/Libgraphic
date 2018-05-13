/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 19:31:25 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 19:39:06 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct	s_vector2
{
	float		x;
	float		y;
}				t_vector2;

t_vector2		ft_to_vec2(float x, float y);
t_vector2		ft_vec2_add(t_vector2 v1, t_vector2 v2);
t_vector2		ft_vec2_sub(t_vector2 v1, t_vector2 v2);
t_vector2		ft_vec2_scale(t_vector2 v, float n);
t_vector2		ft_vec2_opp(t_vector2 v);
float			ft_vec2_dotprod(t_vector2 v1, t_vector2 v2);
float			ft_vec2_magn(t_vector2 v);
t_vector2		ft_vec2_normalize(t_vector2 v);
int				ft_vec2_equal(t_vector2 v1, t_vector2 v2);

typedef struct	s_vector3
{
	float		x;
	float		y;
	float		z;
}				t_vector3;

t_vector3		ft_to_vec3(float x, float y, float z);
t_vector3		ft_vec3_add(t_vector3 v1, t_vector3 v2);
t_vector3		ft_vec3_sub(t_vector3 v1, t_vector3 v2);
t_vector3		ft_vec3_scale(t_vector3 v, float n);
t_vector3		ft_vec3_opp(t_vector3 v);
t_vector3		ft_vec3_crossprod(t_vector3 v1, t_vector3 v2);
float			ft_vec3_dotprod(t_vector3 v1, t_vector3 v2);
float			ft_vec3_magn(t_vector3 v);
t_vector3		ft_vec3_normalize(t_vector3 v);
int				ft_vec3_equal(t_vector3 v1, t_vector3 v2);

#endif
