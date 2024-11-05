/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:21:41 by hladeiro          #+#    #+#             */
/*   Updated: 2024/11/04 16:26:32 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SEARCH_H
# define FT_SEARCH_H

# include <unistd.h>
# include <stdlib.h>

typedef enum s_action	t_action;
typedef char			*t_string;
typedef struct s_entry	t_entry;
typedef struct s_node	t_node;
typedef struct s_hash	t_hash;

typedef	t_entry
{
	t_string	key;
	void		*value;
};

typedef	t_action
{
	ENTER,
	FIND,
};

typedef	s_node
{
	t_entry		entry;
	struct s_node	*next;
};

typedef	s_hash
{
	t_node		**node;
	size_t		len;
};

void	*ft_calloc(size_t count, size_t size);
t_hash	*hcreate(size_t nel);
void	hdestroy(t_hash *ht);
t_entry	*hsearch(t_hash *ht, t_entry item, t_action action);

#endif