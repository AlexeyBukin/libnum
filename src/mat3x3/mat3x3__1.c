/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3x3__1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 09:37:27 by kcharla           #+#    #+#             */
/*   Updated: 2020/07/19 15:18:09 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnum.h"

t_mat3x3		mat3x3_do_num(t_mat3x3 mat, t_num num, t_num f(t_num n1, t_num n2))
{
	mat.x = vec3_do_num(mat.x, num, f);
	mat.y = vec3_do_num(mat.y, num, f);
	mat.z = vec3_do_num(mat.z, num, f);
	return (mat);
}

t_mat3x3		mat3x3_do_vec3(t_mat3x3 mat, t_vec3 vec, t_num f(t_num n1, t_num n2))
{
	mat.x = vec3_do_vec3(mat.x, vec, f);
	mat.y = vec3_do_vec3(mat.y, vec, f);
	mat.z = vec3_do_vec3(mat.z, vec, f);
	return (mat);
}

t_mat3x3		mat3x3_do_mat3x3(t_mat3x3 m1,t_mat3x3 m2, t_num f(t_num n1, t_num n2))
{
	m1.x = vec3_do_vec3(m1.x, m2.x, f);
	m1.y = vec3_do_vec3(m1.y, m2.y, f);
	m1.z = vec3_do_vec3(m1.z, m2.z, f);
	return (m1);
}
