/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybolivar <ybolivar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:12:52 by ybolivar          #+#    #+#             */
/*   Updated: 2022/04/06 14:27:10 by ybolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*start;

	start = NULL;
	if (*lst == NULL)
		*lst = new;
	else
	{
		start = *lst;
		while (start->next != NULL)
			start = start->next;
		start->next = new;
	}
}
