/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qtn__1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoor <jvoor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:51:22 by jvoor             #+#    #+#             */
/*   Updated: 2020/12/04 12:19:26 by jvoor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnum.h"

t_qtn			qtn_normalize(t_qtn q)
{
	t_qtn		qn;
	t_num		norm;

	norm = sqrt(pow(q.w, 2) + pow(q.x, 2) + pow(q.y, 2) + pow(q.z, 2));
	qn.w = q.w / norm;
	qn.x = q.x / norm;
	qn.y = q.y / norm;
	qn.z = q.z / norm;
	qn.w = (-(NUM_EPS) < qn.w && qn.w < NUM_EPS) ? 0 : qn.w;
	qn.x = (-(NUM_EPS) < qn.x && qn.x < NUM_EPS) ? 0 : qn.x;
	qn.y = (-(NUM_EPS) < qn.y && qn.y < NUM_EPS) ? 0 : qn.y;
	qn.z = (-(NUM_EPS) < qn.z && qn.z < NUM_EPS) ? 0 : qn.z;
	return (qn);
}

static t_qtn	matrix_to_qtn1(t_mat3x3 m)
{
	t_qtn		q;
	t_num		s;

	if (m.y.y > m.z.z)
	{
		s = sqrt(1.0 + m.y.y - m.x.x - m.z.z) * 2;
		q.w = (m.x.z - m.z.x) / s;
		q.x = (m.x.y + m.y.x) / s;
		q.y = 0.25 * s;
		q.z = (m.y.z + m.z.y) / s;
	}
	else
	{
		s = sqrt(1.0 + m.z.z - m.x.x - m.y.y) * 2;
		q.w = (m.y.x - m.x.y) / s;
		q.x = (m.x.z + m.z.x) / s;
		q.y = (m.y.z + m.z.y) / s;
		q.z = 0.25 * s;
	}
	return ((q));
}

t_qtn			matrix_to_qtn(t_mat3x3 m)
{
	t_qtn		q;
	t_num		tr;
	t_num		s;

	tr = m.x.x + m.y.y + m.z.z;
	if (tr > 0)
	{
		s = sqrt(tr + 1.0) * 2;
		q.w = 0.25 * s;
		q.x = (m.z.y - m.y.z) / s;
		q.y = (m.x.z - m.z.x) / s;
		q.z = (m.y.x - m.x.y) / s;
	}
	else if ((m.x.x > m.y.y) && (m.x.x > m.z.z))
	{
		s = sqrt(1.0 + m.x.x - m.y.y - m.z.z) * 2;
		q.w = (m.z.y - m.y.z) / s;
		q.x = 0.25 * s;
		q.y = (m.x.y + m.y.x) / s;
		q.z = (m.x.z + m.z.x) / s;
	}
	else
		return (matrix_to_qtn1(m));
	return ((q));
}

t_mat3x3		qtn_to_matrix(t_qtn qn)
{
	t_mat3x3	mat;
	t_qtn		q;

	q = qn;
	mat.x.x = 1 - (2 * q.y * q.y) - (2 * q.z * q.z);
	mat.x.y = (2 * q.x * q.y) - (2 * q.z * q.w);
	mat.x.z = (2 * q.x * q.z) + (2 * q.y * q.w);
	mat.y.x = (2 * q.x * q.y) + (2 * q.z * q.w);
	mat.y.y = 1 - (2 * q.x * q.x) - (2 * q.z * q.z);
	mat.y.z = (2 * q.y * q.z) - (2 * q.x * q.w);
	mat.z.x = (2 * q.x * q.z) - (2 * q.y * q.w);
	mat.z.y = (2 * q.y * q.z) + (2 * q.x * q.w);
	mat.z.z = 1 - (2 * q.x * q.x) - (2 * q.y * q.y);
	return (mat);
}
