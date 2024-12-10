/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:54:49 by hladeiro          #+#    #+#             */
/*   Updated: 2024/12/10 13:54:50 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_search.h"

unsigned int	hash(const t_string key, size_t nel)
{
	unsigned int	hash;
	t_string		k;

	hash = 0;
	k = key;
	while (*k)
		hash = (hash << 5) + *k++;
	return (hash % nel);
}
