/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quaternions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 19:30:29 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 19:38:47 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUATERNIONS_H
# define QUATERNIONS_H

typedef struct	s_quater
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_quater;

t_quater		ft_to_quat(float x, float y, float z, float w);
t_quater		ft_quat_add(t_quater q1, t_quater q2);
t_quater		ft_quat_add_n(t_quater q, float n);
t_quater		ft_quat_sub(t_quater q1, t_quater q2);
t_quater		ft_quat_sub_n(t_quater q1, float n);
t_quater		ft_quat_mul(t_quater q1, t_quater q2);
t_quater		ft_quat_scale(t_quater q, float n);
t_quater		ft_quat_opp(t_quater q);
t_quater		ft_quat_inv(t_quater q);

t_quater		ft_quat_crossprod(t_quater q1, t_quater q2);
float			ft_quat_dotprod(t_quater q1, t_quater q2);
float			ft_quat_magn(t_quater q);
t_quater		ft_quat_normalize(t_quater q);
t_quater		ft_quat_dotnormalize(t_quater q);

t_quater		ft_rot_to_quat(float a_x, float a_y, float a_z, float angle);
float			ft_quat_to_rot(t_quater qr, float *a_x, float *a_y, float *a_z);
void			ft_quat_to_spheric_rot(t_quater q, float *lon,
									float *lat, float *angle);
t_quater		ft_spheric_rot_to_quat(float lat, float lon, float angle);

int				ft_quat_equal(t_quater q1, t_quater q2);
t_quater		ft_quat_lerp(t_quater a, t_quater b, float alpha);

#endif
