/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:46:40 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 12:43:30 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cajatemporal;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		cajatemporal = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = cajatemporal;
	}
	*lst = NULL;
}
