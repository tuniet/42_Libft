/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoniof <antoniof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:06:02 by antoniof          #+#    #+#             */
/*   Updated: 2024/10/04 14:52:06 by antoniof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		a;
	char		*str;

	str = (char *)s;
	a = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == a)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
