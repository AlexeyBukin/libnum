/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3x3__2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 09:37:27 by kcharla           #+#    #+#             */
/*   Updated: 2020/07/19 15:18:09 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnum.h"

t_mat3x3		mat3x3_zero(void)
{
	return (mat3x3(vec3_zero(), vec3_zero(), vec3_zero()));
}

t_mat3x3		mat3x3_identity(void)
{
	return (mat3x3(vec3(1, 0, 0), vec3(0, 1, 0), vec3(0, 0, 1)));
}

t_mat3x3		mat3x3_normalize(t_mat3x3 mat)
{
	mat.x = vec3_round_bounds(mat.x, -NUM_EPS, NUM_EPS, 0);
	mat.y = vec3_round_bounds(mat.y, -NUM_EPS, NUM_EPS, 0);
	mat.z = vec3_round_bounds(mat.z, -NUM_EPS, NUM_EPS, 0);
	return (mat);
}
