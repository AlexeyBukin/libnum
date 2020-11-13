/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libnum_types.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 03:06:49 by kcharla           #+#    #+#             */
/*   Updated: 2020/07/19 15:56:50 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBNUM_TYPES_H
# define LIBNUM_TYPES_H

# include <math.h>

typedef float		t_num;

typedef struct		s_vec2
{
	t_num			x;
	t_num			y;
}					t_vec2;

typedef struct		s_vec3
{
	t_num			x;
	t_num			y;
	t_num			z;
}					t_vec3;

typedef struct		s_mat3x3
{
	t_vec3			x;
	t_vec3			y;
	t_vec3			z;
}					t_mat3x3;

#endif
