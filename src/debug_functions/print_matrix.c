/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 01:43:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/14 05:04:18 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"
#include <stdio.h>

void	print_mat4(t_matrix4 *m, char *name)
{
	if (!m)
	{
		printf("Error : Mat4 is null\n");
		return ;
	}
	printf("-> Mat4 : %s <-\n", name);
	printf("|% .2f % .2f % .2f % .2f |\n", 
			m->array[0][0], m->array[0][1], m->array[0][2], m->array[0][3]);
	printf("|% .2f % .2f % .2f % .2f |\n", 
			m->array[1][0], m->array[1][1], m->array[1][2], m->array[1][3]);
	printf("|% .2f % .2f % .2f % .2f |\n", 
			m->array[2][0], m->array[2][1], m->array[2][2], m->array[2][3]);
	printf("|% .2f % .2f % .2f % .2f |\n", 
			m->array[3][0], m->array[3][1], m->array[3][2], m->array[3][3]);
	printf("\n");
}
