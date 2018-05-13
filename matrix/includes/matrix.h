/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 19:29:16 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:28:17 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

#include "../../vector/includes/vector.h"
#include "../../quaternions/includes/quaternions.h"

typedef struct	s_matrix4
{
	float		array[4][4];
}				t_matrix4;

t_matrix4		ft_gen_identity_mat4(void);
t_matrix4		ft_gen_translate_mat4(t_vector3 v);
t_matrix4		ft_gen_scale_mat4(t_vector3 v);
t_matrix4		ft_gen_rotation_mat4(float deg_angle, t_vector3 v);
t_matrix4		ft_gen_euler_rotation_mat4(float deg_x,
											float deg_y, float deg_z);

t_vector3		ft_mat4_premul_vec3(t_matrix4 m, t_vector3 v);
t_vector3		ft_mat4_postmul_vec3(t_vector3 v, t_matrix4 m);
t_quater		ft_mat4_premul_quat(t_matrix4 m, t_quater q);
t_quater		ft_mat4_postmul_quat(t_quater q, t_matrix4 m);
t_quater		ft_mat4_premul_norm_quat(t_matrix4 m, t_quater q);
t_quater		ft_mat4_postmul_norm_quat(t_quater q, t_matrix4 m);
t_matrix4		ft_mat4_mul_mat4(t_matrix4 m1, t_matrix4 m2);
t_matrix4		ft_transpose_mat4(t_matrix4 m);

t_quater		ft_mat4_to_quat(t_matrix4 m);
t_matrix4		ft_quat_to_mat4(t_quater q);
t_vector3		ft_quat_to_vec3(t_quater q);
t_quater		ft_vec3_to_quat(t_vector3 v, float w);

#endif
