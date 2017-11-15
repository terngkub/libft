/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkamolba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:36:40 by nkamolba          #+#    #+#             */
/*   Updated: 2017/11/09 12:12:46 by nkamolba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	char	*ret;

	if (n == -2147483648)
		return (ft_strsub("-2147483648", 0, 11));
	len = ft_numlen(n);
	if (len == 0)
		return (NULL);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	ret = str;
	if (n < 0)
	{
		*str++ = '-';
		n *= -1;
		len--;
	}
	while (len--)
		*str++ = n / ft_power(10, len) % 10 + '0';
	return (ret);
}
