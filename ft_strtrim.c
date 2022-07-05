/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybolivar <ybolivar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:12:11 by ybolivar          #+#    #+#             */
/*   Updated: 2022/04/05 13:12:18 by ybolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	ft_cinstr(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (!s1)
		return (NULL);
	while (ft_cinstr(s1[count], set))
		count++;
	if (count == (int) ft_strlen(s1))
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = 0;
		return (str);
	}
	i = ft_strlen(s1) - 1;
	while (ft_cinstr(s1[i], set))
		i--;
	str = ft_substr(s1, count, i - count + 1);
	return (str);
}
