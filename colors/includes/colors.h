/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 19:27:55 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:39:45 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
# define COLORS_H

# include <stdint.h>

# define DEFAULT_RED_VALUE 0xFF
# define DEFAULT_GREEN_VALUE 0xFF
# define DEFAULT_BLUE_VALUE 0xFF
# define DEFAULT_ALPHA_VALUE 0x0

typedef struct	s_colorrgb
{
	uint8_t		red;
	uint8_t		green;
	uint8_t		blue;
}				t_colorrgb;

t_colorrgb		ft_rgb_default(void);
t_colorrgb		ft_rgb_set(uint8_t red, uint8_t green, uint8_t blue);

typedef struct	s_colorrgba
{
	uint8_t		alpha;
	uint8_t		red;
	uint8_t		green;
	uint8_t		blue;
}				t_colorrgba;

t_colorrgba		ft_rgba_default(void);
t_colorrgba		ft_rgba_set(uint8_t red, uint8_t green, uint8_t blue,
							uint8_t alpha);
t_colorrgba		ft_rgba_add(t_colorrgba color, t_colorrgba add);
t_colorrgba		ft_rgba_sub(t_colorrgba color, t_colorrgba sub);
t_colorrgb		ft_itorgb(int color);
t_colorrgba		ft_itorgba(int color);
int				ft_rgbtoi(t_colorrgb color);
int				ft_rgbatoi(t_colorrgba color);
t_colorrgb		ft_rgb_lerp(t_colorrgb a, t_colorrgb b, float i);
t_colorrgba		ft_rgba_lerp(t_colorrgba a, t_colorrgba b, float i);
int				ft_icolor_lerp(int a, int b, float i);

#endif
