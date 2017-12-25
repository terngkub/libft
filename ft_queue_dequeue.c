/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_dequeue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkamolba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 17:48:08 by nkamolba          #+#    #+#             */
/*   Updated: 2017/12/25 17:48:44 by nkamolba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_queue_dequeue(t_queue *queue)
{
	t_list	*list;
	void	*content;

	if (!queue || queue->size == 0)
		return (NULL);
	list = queue->head;
	content = list->content;
	if (queue->size == 1)
		queue->tail = NULL;
	queue->head = queue->head->next;
	free(list);
	queue->size--;
	return (content);
}
