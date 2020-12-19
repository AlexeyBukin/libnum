/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3toqtn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:34:02 by kcharla           #+#    #+#             */
/*   Updated: 2020/07/19 15:53:47 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnum.h"

t_vec3			qtn_to_vec3(t_qtn q)
{
	t_vec3 		v;

	v.x = q.x;
	v.y = q.y;
	v.z = q.z;
	return (v);
}