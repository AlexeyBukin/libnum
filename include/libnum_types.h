/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libnum_types.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoor <jvoor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 03:06:49 by kcharla           #+#    #+#             */
/*   Updated: 2020/12/03 18:50:04 by jvoor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBNUM_TYPES_H
# define LIBNUM_TYPES_H

# include <math.h>

typedef float		t_num;

//TODO: define different epsilon fo double and float

# define NUM_EPS 0.0000001

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

typedef struct		s_qtn
{
	t_num			x;
	t_num			y;
	t_num			z;
	t_num			w;
}					t_qtn;


#endif
