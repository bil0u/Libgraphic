/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:54:56 by upopee            #+#    #+#             */
/*   Updated: 2017/04/20 22:19:49 by upopee           ###   ########.fr       */
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

t_mlxwin	*init_mlxwin(void *mlx_ptr, int width, int height, char *title)
{
	t_mlxwin	*win;

	win = (t_mlxwin *)malloc(sizeof(t_mlxwin));
	if (win == NULL)
		return (NULL);
	win->id = mlx_new_window(mlx_ptr, width, height, title);
	if (win->id == NULL)
	{
		free(&win);
		return (NULL);
	}
	win->width = width;
	win->height = height;
	win->title = title;
	return (win);
}

t_mlximg	*init_mlximg(void *mlx_ptr, int	width, int height)
{
	t_mlximg	*img;

	img = (t_mlximg *)malloc(sizeof(t_mlximg));
	if (img == NULL)
		return (NULL);
	img->id = mlx_new_image(mlx_ptr, width, height);
	if (img->id == NULL)
	{
		free(&img);
		return (NULL);
	}
	img->data = mlx_get_data_addr(img->id, &img->bpp, \
									&img->sz_line, &img->endian);
	img->width = width;
	img->height = height;
	img->limit = img->data + img->width * img->bpp + img->height * img->sz_line;
	img->center = img->data + ((img->limit - img->data) / 2);
	return (img);
}
