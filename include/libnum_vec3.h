/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libnum_vec3.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 03:06:49 by kcharla           #+#    #+#             */
/*   Updated: 2020/07/19 15:56:50 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBNUM_VEC3_H
# define LIBNUM_VEC3_H

# include "libnum_types.h"

/*
** vec3__1.c
*/

t_vec3				vec3_plus(t_vec3 a, t_vec3 b);
t_vec3				vec3_minus(t_vec3 a, t_vec3 b);
t_vec3				vec3_mult(t_vec3 a, t_vec3 b);
t_vec3				vec3_div(t_vec3 a, t_vec3 b);
t_vec3				vec3_sqr(t_vec3 a);

/*
** vec3__2.c
*/

t_vec3				vec3_plus_num(t_vec3 v, t_num n);
t_vec3				vec3_minus_num(t_vec3 v, t_num n);
t_vec3				vec3_mult_num(t_vec3 v, t_num n);
t_vec3				vec3_div_num(t_vec3 v, t_num n);
t_num				vec3_sum(t_vec3 v);

/*
** vec3__3.c
*/

t_vec3				vec3(t_num x, t_num y, t_num z);
t_vec3				vec3_zero();
int					vec3_is_zero(t_vec3 a);
t_vec3				vec3_inf();
int					vec3_is_inf(t_vec3 a);

/*
** vec3__4.c
*/

t_vec3				vec3_invert(t_vec3 vector);
t_vec3				vec3_normalize(t_vec3 vector);
t_num				vec3_dot(t_vec3 a, t_vec3 b);
t_vec3				vec3_cross(t_vec3 a, t_vec3 b);
t_num				vec3_angle_cos(t_vec3 a, t_vec3 b);

/*
** vec3__5.c
*/

t_num				vec3_dist_sqr(t_vec3 a, t_vec3 b);
t_num				vec3_dist(t_vec3 a, t_vec3 b);
t_num				vec3_len(t_vec3 a);
t_vec3				vec3_max(t_vec3 a, t_vec3 b);
t_vec3				vec3_min(t_vec3 a, t_vec3 b);

/*
** vec3__6.c
*/

t_vec3				vec3_do_vec3(t_vec3 v1, t_vec3 v2, t_num f(t_num n1,
													t_num n2));
t_vec3				vec3_do_num(t_vec3 v, t_num n, t_num f(t_num n1, t_num n2));

/*
** vec3__7.c
*/

int					vec3_point_is_behind(t_vec3 vec3_from_zero, t_vec3 point);
t_vec3				vec3_clamp(t_vec3 source, t_num min, t_num max);
t_vec3				vec3_max_num(t_vec3 v, t_num n);
t_vec3				vec3_max_min(t_vec3 v, t_num n);
t_vec3				vec3_round_bounds(t_vec3 vec, t_num min, t_num max,
													t_num round);

#endif
