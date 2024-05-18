/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfararan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:08:11 by nfararan          #+#    #+#             */
/*   Updated: 2024/05/18 10:14:40 by nfararan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sets.h"

int	is_julia(t_complex z)
{
	t_complex	z_next;
	t_complex	map_z;
	t_complex	c;
	int			i;

	map_z = complex_map(z,
			(t_range){.start = 0, .end = WIDTH},
			(t_range){.start = -2, .end = 2});
	z_next = complex_new(map_z.x, map_z.y);
	c = complex_new(-0.835, -0.232);
	i = 0;
	while (i < ITERATION_MAX && z_next.x * z_next.x + z_next.y * z_next.y < 4)
	{
		z_next = complex_z_next(z_next, c);
		i++;
	}
	if (i == ITERATION_MAX)
		return (1);
	return (0);
}
