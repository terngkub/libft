/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkamolba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 12:22:28 by nkamolba          #+#    #+#             */
/*   Updated: 2017/12/25 16:21:06 by nkamolba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_stack_pop(t_stack *stack)
{
	t_list	*list;
	void	*content;

	if (!stack || stack->size == 0)
		return (NULL);
	list = stack->head;
	content = list->content;
	stack->head = list->next;
	free(list);
	stack->size--;
	return (content);
}
