/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sets.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfararan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:08:37 by nfararan          #+#    #+#             */
/*   Updated: 2024/05/17 21:36:53 by nfararan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SETS_H
# define SETS_H

# ifndef WIDTH
#  define WIDTH 100
# endif
# ifndef HEIGHT
#  define HEIGHT 100
# endif
# ifndef ITERATION_MAX
#  define ITERATION_MAX 20
# endif

typedef struct s_range
{
	double	start;
	double	end;
}	t_range;

typedef struct s_complex
{
	double	x;
	double	y;
}	t_complex;

t_complex	complex_new(double x, double y);
t_complex	complex_sum(t_complex z1, t_complex z2);
t_complex	complex_square(t_complex z);
t_complex	complex_map(t_complex z, t_range original, t_range target);
t_complex	complex_z_next(t_complex z, t_complex c);
int			is_mandelbrot(t_complex c);
int			is_julia(t_complex z);

#endif
