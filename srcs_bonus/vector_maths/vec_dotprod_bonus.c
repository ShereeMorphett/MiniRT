/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_dotprod_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djagusch <djagusch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:02:10 by djagusch          #+#    #+#             */
/*   Updated: 2023/07/25 11:32:13 by djagusch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_math_bonus.h"

float	vec3_dot(const t_vec3 v1, const t_vec3 v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}

float	vec4_dot(const t_vec4 v1, const t_vec4 v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}
