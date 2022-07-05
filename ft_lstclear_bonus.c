/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybolivar <ybolivar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:01:49 by ybolivar          #+#    #+#             */
/*   Updated: 2022/04/12 17:15:12 by ybolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*tmp;

	if (*lst != NULL && lst != NULL)
	{
		curr = *lst;
		while (curr->next != NULL)
		{
			tmp = curr->next;
			ft_lstdelone(curr, del);
			curr = tmp;
		}
		ft_lstdelone(curr, del);
		*lst = NULL;
	}
}
