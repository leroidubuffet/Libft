/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybolivar <ybolivar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:03:08 by ybolivar          #+#    #+#             */
/*   Updated: 2022/03/22 18:18:23 by ybolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*fsrc;
	char		*fdst;

	fsrc = (const char *)src;
	fdst = (char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
	{
		*fdst++ = *fsrc++;
	}
	return (dst);
}
