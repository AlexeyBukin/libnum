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

t_mat3x3		mat3x3_num_plus(t_mat3x3 mat, t_num num)
{
	return (mat3x3_do_num(mat, num, num_plus));
}

t_mat3x3		mat3x3_num_minus(t_mat3x3 mat, t_num num)
{
	return (mat3x3_do_num(mat, num, num_minus));
}

t_mat3x3		mat3x3_num_mult(t_mat3x3 mat, t_num num)
{
	return (mat3x3_do_num(mat, num, num_mult));
}

t_mat3x3		mat3x3_num_div(t_mat3x3 mat, t_num num)
{
	return (mat3x3_do_num(mat, num, num_div));
}
