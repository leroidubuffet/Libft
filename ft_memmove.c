/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybolivar <ybolivar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:08:52 by ybolivar          #+#    #+#             */
/*   Updated: 2022/03/23 14:09:20 by ybolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*fd;
	char	*fs;

	fd = (char *)dst;
	fs = (char *)src;
	if (fd == fs)
		return (dst);
	if (fs < fd)
	{
		while (len--)
			*(fd + len) = *(fs + len);
		return (dst);
	}
	while (len--)
		*fd++ = *fs++;
	return (dst);
}
