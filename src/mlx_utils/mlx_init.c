/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:54:56 by upopee            #+#    #+#             */
/*   Updated: 2017/04/14 17:35:28 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

t_mlxenv	*init_mlxenv()
{
	t_mlxenv	*m_env;

	m_env = (t_mlxenv *)malloc(sizeof(t_mlxenv));
	if (m_env == NULL)
		return (NULL);
	m_env->init_id = mlx_init();
	if (m_env->init_id == NULL)
	{
		free(&m_env);
		return (NULL);
	}
	return (m_env);
}

t_mlxwin	*init_mlxwin(void *mlx_ptr, int sz_x, int sz_y, char *title)
{
	t_mlxwin	*m_win;

	m_win = (t_mlxwin *)malloc(sizeof(t_mlxwin));
	if (m_win == NULL)
		return (NULL);
	m_win->id = mlx_new_window(mlx_ptr, sz_x, sz_y, title);
	if (m_win->id == NULL)
	{
		free(&m_win);
		return (NULL);
	}
	m_win->sz_x = sz_x;
	m_win->sz_y = sz_y;
	m_win->title = title;
	return (m_win);
}

t_mlximg	*init_mlximg(void *mlx_ptr, int	sz_x, int sz_y)
{
	t_mlximg	*m_img;

	m_img = (t_mlximg *)malloc(sizeof(t_mlximg));
	if (m_img == NULL)
		return (NULL);
	m_img->id = mlx_new_image(mlx_ptr, sz_x, sz_y);
	if (m_img->id == NULL)
	{
		free(&m_img);
		return (NULL);
	}
	m_img->sz_x = sz_x;
	m_img->sz_y = sz_y;
	m_img->data = mlx_get_data_addr(mlx_ptr, &(m_img->bpp),
										&(m_img->sz_line), &(m_img->endian));
	return (m_img);
}
