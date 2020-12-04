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

	res.w = (q1.w * q2.w) - (q1.x * q2.x) - (q1.y * q2.y) - (q1.z * q2.z);
	res.x = (q1.w * q2.x) + (q1.x * q2.w) + (q1.y * q2.z) - (q1.z * q2.y);
	res.y = (q1.w * q2.y) - (q1.x * q2.z) + (q1.y * q2.w) + (q1.z * q2.x);
	res.z = (q1.w * q2.z) + (q1.x * q2.y) - (q1.y * q2.x) + (q1.z * q2.w);
	return (res);
}

t_vec3			vec3_transform_qtn(t_vec3 v, t_qtn q)
{
	t_vec3      res;// TODO: chance typo is super high, must be tested strictly

	res.x = (pow(q.w, 2) * v.x) + (2 * q.y * q.w * v.z) - (2 * q.z * q.w * v.y) +
		(pow(q.x, 2) * v.x) + (2 * q.y * q.x * v.y) + (2 * q.z * q.x * v.z) -
		(pow(q.z, 2) * v.x) - (pow(q.y, 2) * v.x);
	res.y = (2 * q.x * q.y * v.x) + (pow(q.y, 2) * v.y) + (2 * q.z * q.y * v.z) +
		(2 * q.w * q.z * v.x) - (pow(q.z, 2) * v.y) + (pow(q.w, 2) * v.y) -
		(2 * q.x * q.w * v.z) - (pow(q.x, 2) * v.y);
	res.z = (2 * q.x * q.z * v.x) + (2 * q.y * q.z * v.y) + (pow(q.z, 2) * v.z) -
		(2 * q.w * q.y * v.x) - (pow(q.y, 2) * v.z) + (2 * q.w * q.x * v.y) -
		(pow(q.x, 2) * v.z) + (pow(q.w, 2) * v.z);
	return (res);
}
