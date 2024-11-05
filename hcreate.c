/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hcreate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:04:29 by hladeiro          #+#    #+#             */
/*   Updated: 2024/11/05 21:04:31 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_search.h"

t_hash	*hcreate(size_t nel)
{
	t_hash	*hash;

	hash = ft_calloc(sizeof(t_hash), 1);
	if (!hash)
		return (NULL);
	hash->node = (t_node **)ft_calloc(sizeof(t_node *), nel);
	if (hash->node)
	{
		free(hash);
		return (NULL);
	}
	hash->len = nel;
	return (hash);
}
