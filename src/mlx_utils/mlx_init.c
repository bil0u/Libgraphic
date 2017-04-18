/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:54:56 by upopee            #+#    #+#             */
/*   Updated: 2017/04/18 05:29:12 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

t_mlxenv	*init_mlxenv()
{
	t_mlxenv	*env;

	env = (t_mlxenv *)malloc(sizeof(t_mlxenv));
	if (env == NULL)
		return (NULL);
	env->init_id = mlx_init();
	if (env->init_id == NULL)
	{
		free(&env);
		return (NULL);
	}
	return (env);
}

t_mlxwin	*init_mlxwin(void *mlx_ptr, int sz_x, int sz_y, char *title)
{
	t_mlxwin	*win;

	win = (t_mlxwin *)malloc(sizeof(t_mlxwin));
	if (win == NULL)
		return (NULL);
	win->id = mlx_new_window(mlx_ptr, sz_x, sz_y, title);
	if (win->id == NULL)
	{
		free(&win);
		return (NULL);
	}
	win->sz_x = sz_x;
	win->sz_y = sz_y;
	win->title = title;
	return (win);
}

t_mlximg	*init_mlximg(void *mlx_ptr, int	sz_x, int sz_y)
{
	t_mlximg	*img;

	img = (t_mlximg *)malloc(sizeof(t_mlximg));
	if (img == NULL)
		return (NULL);
	img->id = mlx_new_image(mlx_ptr, sz_x, sz_y);
	if (img->id == NULL)
	{
		free(&img);
		return (NULL);
	}
	img->data = mlx_get_data_addr(img->id, &img->bpp, \
									&img->sz_line, &img->endian);
	img->sz_x = sz_x;
	img->sz_y = sz_y;
	img->limit = img->data + img->sz_x * img->bpp + img->sz_y * img->sz_line;
	img->center = img->data + ((img->limit - img->data) / 2);
	return (img);
}
