/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_end.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:54:56 by upopee            #+#    #+#             */
/*   Updated: 2017/04/14 20:12:54 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

void	del_mlxenv(t_mlxenv *m_env)
{
	if (m_env)
	{
		free(m_env);
	}
}

void	del_mlxwin(void *mlx_id, t_mlxwin *m_win)
{
	if (m_win)
	{
		if (mlx_id && m_win->id)
			mlx_destroy_window(mlx_id, m_win->id);
		free(m_win);
	}
}

void	del_mlximg(void *mlx_id, t_mlximg *m_img)
{
	if (m_img)
	{
		if (mlx_id && m_img->id)
			mlx_destroy_image(mlx_id, m_img->id);
		free(m_img);
	}
}
