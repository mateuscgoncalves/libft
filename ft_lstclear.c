/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:31:32 by mgoncalv          #+#    #+#             */
/*   Updated: 2021/12/01 14:32:49 by mgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!del || !lst || !(*lst))
		return ;
	while (*lst && lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, (*del));
		*lst = next;
	}
	lst = NULL;
}
