/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybolivar <ybolivar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:03:37 by ybolivar          #+#    #+#             */
/*   Updated: 2022/03/22 13:06:13 by ybolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*buf;

	buf = str;
	while (len--)
	{
		*buf++ = (unsigned char)c;
	}
	return (str);
}
