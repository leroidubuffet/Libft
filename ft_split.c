/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybolivar <ybolivar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:21:03 by ybolivar          #+#    #+#             */
/*   Updated: 2022/04/13 18:16:43 by ybolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int static	ft_cntwrd(char const *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

void static	ft_freelst(char **lst, int n)
{
	while (n > 0)
	{
		free(lst[n]);
		n--;
	}
	free(lst);
}

char static	*ft_instr(char const *s, char c)
{
	int		i;
	char	*lst;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	lst = (char *)malloc(sizeof(char) * (i + 1));
	if (!lst)
		return (NULL);
	ft_strlcpy(lst, s, i + 1);
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		n_str;
	char	**lst;

	if (!s)
		return (NULL);
	n_str = ft_cntwrd(s, c);
	lst = (char **)malloc(sizeof(char *) * (n_str + 1));
	if (!lst)
		return (NULL);
	i = 0;
	while (i < n_str)
	{
		while (s[0] == c)
			s++;
		lst[i] = ft_instr(s, c);
		if (!lst[i])
		{
			ft_freelst(lst, i);
		}
		s = s + ft_strlen(lst[i]);
		i++;
	}
	lst[i] = 0;
	return (lst);
}
