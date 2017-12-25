/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_enqueue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkamolba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 17:47:39 by nkamolba          #+#    #+#             */
/*   Updated: 2017/12/25 17:47:52 by nkamolba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_queue_enqueue(t_queue *queue, void const *content)
{
	t_list	*list;

	if (!queue || !content)
		return ;
	if (!(list = ft_lstnew(content, queue->content_size)))
		return ;
	if (queue->size > 0)
		queue->tail->next = list;
	else
		queue->head = list;
	queue->tail = list;
	queue->size++;
}
