/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libnum_qtn.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoor <jvoor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:52:39 by jvoor             #+#    #+#             */
/*   Updated: 2020/12/04 12:14:12 by jvoor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBNUM_QTN
# define LIBNUM_QTN
# include "libnum_types.h"


/*
**      qtn__1.c
*/

t_qtn			qtn_normalize(t_qtn q);
t_qtn			matrix_to_qtn(t_mat3x3 m);
t_mat3x3		qtn_to_matrix(t_qtn q);

/*
**      qtn__2.c
*/

t_qtn           qtn_mult_qtn(t_qtn q1, t_qtn q2);
t_vec3          vec3_transform_qtn(t_vec3 v, t_qtn q);

#endif