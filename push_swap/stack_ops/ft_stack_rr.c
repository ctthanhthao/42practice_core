/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:23:13 by thchau            #+#    #+#             */
/*   Updated: 2025/01/15 10:27:45 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	reverse_rotate_no_print(t_stack **st)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!st || !*st || ft_stack_size(*st) == 1)
		return ;
	last = *st;
	while (last->next)
	{
		if (last->next->next == NULL)
			before_last = last;
		last = last->next;
	}
	last->next = *st;
	*st = last;
	before_last->next = NULL;
}

// reverse rotate elements: last element becomes the first element
void	reverse_rotate(t_stack **st, char c)
{
	reverse_rotate_no_print(st);
	write_intr("rr", c);
}

void	both_reverse_rotate(t_stack **st_a, t_stack **st_b)
{
	reverse_rotate_no_print(st_a);
	reverse_rotate_no_print(st_b);
	write_intr("rrr", ' ');
}
