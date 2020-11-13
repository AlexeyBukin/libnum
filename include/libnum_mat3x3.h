/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libnum_mat3x3.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 03:06:49 by kcharla           #+#    #+#             */
/*   Updated: 2020/07/19 15:56:50 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBNUM_MAT3X3_H
# define LIBNUM_MAT3X3_H

# include "libnum_types.h"

/*
** mat3x3__1.c
*/

t_mat3x3		mat3x3_do_num(t_mat3x3 mat, t_num num, t_num f(t_num n1, t_num n2));
t_mat3x3		mat3x3_do_vec3(t_mat3x3 mat, t_vec3 vec, t_num f(t_num n1, t_num n2));
t_mat3x3		mat3x3_do_mat3x3(t_mat3x3 m1,t_mat3x3 m2, t_num f(t_num n1, t_num n2));

/*
** mat3x3__2.c
*/

t_mat3x3		mat3x3_num_plus(t_mat3x3 mat, t_num num);
t_mat3x3		mat3x3_num_minus(t_mat3x3 mat, t_num num);
t_mat3x3		mat3x3_num_mult(t_mat3x3 mat, t_num num);
t_mat3x3		mat3x3_num_div(t_mat3x3 mat, t_num num);

#endif
