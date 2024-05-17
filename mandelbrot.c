/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfararan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:36:43 by nfararan          #+#    #+#             */
/*   Updated: 2024/05/17 20:55:37 by nfararan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scale.h"

int	is_mandelbrot(t_complex c)
{
	t_complex	z;
	t_complex	map_c;
	int			i;

	map_c = complex_map(c,
			(t_range){.start = 0, .end = WIDTH},
			(t_range){.start = -2, .end = 2});
	z = complex_new(0, 0);
	i = 0;
	while (i < ITERATION_MAX && z.x * z.x + z.y * z.y < 4)
	{
		z = complex_z_next(z, map_c);
		i++;
	}
	if (i == ITERATION_MAX)
		return (1);
	return (0);
}
