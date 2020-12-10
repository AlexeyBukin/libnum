/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qtn__2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoor <jvoor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 23:14:33 by jvoor             #+#    #+#             */
/*   Updated: 2020/12/04 12:17:22 by jvoor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnum.h"

t_qtn			qtn_mult_qtn(t_qtn q1, t_qtn q2)
{
	t_qtn		res;

	res.x = (q1.w * q2.x) + (q1.x * q2.w) + (q1.y * q2.z) - (q1.z * q2.y);
	res.y = (q1.w * q2.y) - (q1.x * q2.z) + (q1.y * q2.w) + (q1.z * q2.x);
	res.z = (q1.w * q2.z) + (q1.x * q2.y) - (q1.y * q2.x) + (q1.z * q2.w);
	res.w = (q1.w * q2.w) - (q1.x * q2.x) - (q1.y * q2.y) - (q1.z * q2.z);
	return ((res));
}

t_qtn			qtn_reverse(t_qtn q)
{
	t_qtn		qr;

	qr.x = -q.x;
	qr.y = -q.y;
	qr.z = -q.z;
	qr.w = q.w;
	return (qr);
}

t_vec3			vec3_rotate_qtn(t_vec3 v, t_qtn q)
{
	t_qtn		vq;
	t_qtn		qr;
	t_qtn		resq;
	t_vec3		res;

	vq = vec3_to_qtn(v);
	resq = qtn_mult_qtn(q, vq);
	qr = qtn_reverse(q);
	resq = qtn_mult_qtn(resq, qr);
	res = qtn_to_vec3(resq);
	return (res);
}
