/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoniof <antoniof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:40:55 by antoniof          #+#    #+#             */
/*   Updated: 2024/09/30 15:08:14 by antoniof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ret;

	if (lst == NULL)
		return (NULL);
	ret = lst;
	while (ret != NULL)
	{
		if (ret->next == NULL)
			return (ret);
		ret = ret->next;
	}
	return (ret);
}
