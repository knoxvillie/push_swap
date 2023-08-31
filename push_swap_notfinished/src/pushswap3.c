/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:01:36 by kfaustin          #+#    #+#             */
/*   Updated: 2023/02/16 16:53:13 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pushswap_3(t_stack *s)
{
	long	imax;
	long	imin;

	if (!s->size)
		return ;
	imax = max_index(s->list, s->size);
	imin = min_index(s->list, s->size);
	while (!is_sorted(s))
	{
		if (imin == (s->size - 1) && imax == (imin - 1))
			ft_shiftdown(s);
		else if (imax == 0 && imin == (imax + 1))
			ft_shiftup(s);
		else
			ft_swap(s);
		imax = max_index(s->list, s->size);
		imin = min_index(s->list, s->size);
	}
}
