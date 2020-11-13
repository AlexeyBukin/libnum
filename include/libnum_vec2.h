/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libnum_vec2.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 03:06:49 by kcharla           #+#    #+#             */
/*   Updated: 2020/07/19 15:56:50 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBNUM_VEC2_H
# define LIBNUM_VEC2_H

# include "libnum_types.h"

/*
** vec2__1.c
*/

t_vec2				vec2_plus(t_vec2 a, t_vec2 b);
t_vec2				vec2_minus(t_vec2 a, t_vec2 b);
t_vec2				vec2_mult(t_vec2 a, t_vec2 b);
t_vec2				vec2_div(t_vec2 a, t_vec2 b);
t_vec2				vec2_sqr(t_vec2 a);

/*
** vec2__2.c
*/

t_vec2				vec2_plus_num(t_vec2 v, t_num n);
t_vec2				vec2_minus_num(t_vec2 v, t_num n);
t_vec2				vec2_mult_num(t_vec2 v, t_num n);
t_vec2				vec2_div_num(t_vec2 v, t_num n);
t_num				vec2_sum(t_vec2 v);

/*
** vec2__3.c
*/

t_vec2				vec2(t_num x, t_num y);
t_vec2				vec2_zero();
int					vec2_is_zero(t_vec2 a);
t_vec2				vec2_inf();
int					vec2_is_inf(t_vec2 a);

/*
** vec2__4.c
*/

t_vec2				vec2_invert(t_vec2 vector);
t_vec2				vec2_normalize(t_vec2 vector);
t_num				vec2_dot(t_vec2 a, t_vec2 b);
/*
**t_vec2				vec2_cross(t_vec2 a, t_vec2 b);
*/
t_num				vec2_angle_cos(t_vec2 a, t_vec2 b);

/*
** vec2__5.c
*/

t_num				vec2_dist_sqr(t_vec2 a, t_vec2 b);
t_num				vec2_dist(t_vec2 a, t_vec2 b);
t_num				vec2_len(t_vec2 a);
t_vec2				vec2_max(t_vec2 a, t_vec2 b);
t_vec2				vec2_min(t_vec2 a, t_vec2 b);

/*
** vec2__6.c
*/

t_vec2				vec2_do_vec2(t_vec2 v1, t_vec2 v2, t_num f(t_num n1, t_num n2));
t_vec2				vec2_do_num(t_vec2 v, t_num n, t_num f(t_num n1, t_num n2));
t_vec2				vec2_swap(t_vec2 v);

/*
** vec2__7.c
*/

int					vec2_point_is_behind(t_vec2 vec2_from_zero, t_vec2 point);
t_vec2				vec2_clamp(t_vec2 source, t_num min, t_num max);
t_vec2				vec2_max_num(t_vec2 v, t_num n);
t_vec2				vec2_max_min(t_vec2 v, t_num n);

#endif
