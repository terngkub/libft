/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkamolba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 11:59:31 by nkamolba          #+#    #+#             */
/*   Updated: 2017/12/25 16:21:18 by nkamolba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stack_push(t_stack *stack, void const *content)
{
	t_list	*list;

	if (!stack || !content)
		return ;
	if (!(list = ft_lstnew(content, stack->content_size)))
		return ;
	list->next = stack->head;
	stack->head = list;
	stack->size++;
}
