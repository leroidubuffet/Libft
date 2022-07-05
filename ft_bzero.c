/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybolivar <ybolivar@student.42madrid.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:07:26 by ybolivar          #+#    #+#             */
/*   Updated: 2022/03/22 12:04:24 by ybolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_bzero(void *str, size_t len)
{
	unsigned char	*buf;

	buf = str;
	while (len--)
	{
		*buf++ = 0;
	}
}
