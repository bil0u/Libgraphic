/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 19:28:13 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:27:36 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H

#include "../../vertex/includes/vertex.h"
#include "../../vector/includes/vector.h"
#include "../../quaternions/includes/quaternions.h"
#include "../../matrix/includes/matrix.h"
#include "../../camera/includes/camera.h"

# define FLOAT_PRECISION	2

void			print_ver2i(t_vertex2i v);
void			print_vec2(t_vector2 v);
void			print_vec3(t_vector3 v);
void			print_quat(t_quater v);
void			print_mat4(t_matrix4 m, char *name);
void			print_camera(t_camera cam);

#endif
