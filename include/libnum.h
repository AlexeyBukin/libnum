/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libnum.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoor <jvoor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 03:06:49 by kcharla           #+#    #+#             */
/*   Updated: 2020/12/03 19:13:25 by jvoor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBNUM_H
# define LIBNUM_H

# include <math.h>
# include "libnum_types.h"
# include "libnum_vec2.h"
# include "libnum_vec3.h"
# include "libnum_qtn.h"
# include "libnum_mat3x3.h"

/*
** num__1.c
*/

t_num		num_plus(t_num a, t_num b);
t_num		num_minus(t_num a, t_num b);
t_num		num_mult(t_num a, t_num b);
t_num		num_div(t_num a, t_num b);
t_num		num_sqr(t_num a);

/*
** num__2.c
*/

t_num		num_min(t_num a, t_num b);
t_num		num_max(t_num a, t_num b);
t_num		num_clamp(t_num val, t_num min, t_num max);
t_num		num_map(t_num x, t_vec2 in, t_vec2 out);

/* ************************************************************************** */
/*                                convert                                     */
/* ************************************************************************** */

t_vec3				vec2to3_xy0(t_vec2 v2);
t_vec3				vec2to3_xxy(t_vec2 v2);
t_vec3				vec2to3_xyy(t_vec2 v2);

t_vec2				vec3to2_xy(t_vec3 v3);
t_vec2				vec3to2_yz(t_vec3 v3);
t_vec2				vec3to2_xz(t_vec3 v3);

#endif
